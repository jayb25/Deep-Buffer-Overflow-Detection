import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt
import os
from operator import mul
import math
import ast

# SEED = 42
tf.set_random_seed(0)
SEQ_LEN = 146944

def load_vocab(vocab_path):
    assert os.path.exists(vocab_path)
    with open(vocab_path, 'r') as f:
        #Read first line as dict
        ivocab = ast.literal_eval(next(f))
    return ivocab


def conv2d(input_, output_dim, k_h=5, k_w=5, d_h=2, d_w=2, stddev=0.02, name='conv2d'):
    with tf.variable_scope(name, reuse=tf.AUTO_REUSE):
        w = tf.get_variable('w', [k_h, k_w, input_.get_shape()[-1], output_dim],
            initializer=tf.truncated_normal_initializer(stddev=stddev))
        conv = tf.nn.conv2d(input_, w, strides=[1, d_h, d_w, 1], padding='SAME')
        biases = tf.get_variable('biases', [output_dim], initializer=tf.constant_initializer(0.0))
        conv = tf.nn.bias_add(conv, biases) #, [-1, conv.get_shape()[1], conv.get_shape()[2], conv.get_shape()[3]])
        return conv




def linear(input_, output_size, name=None, stddev=0.02, bias_start=0.0, with_w=False):
    shape= input_.get_shape().as_list()
    with tf.variable_scope(name or 'Linear', reuse=tf.AUTO_REUSE):
        matrix = tf.get_variable('Matrix', [shape[1], output_size], tf.float32,
            initializer=tf.random_normal_initializer(stddev=stddev))
        bias = tf.get_variable('bias', [output_size], 
            initializer=tf.random_normal_initializer(bias_start))
        if with_w:
            return tf.matmul(input_, matrix) + bias, matrix, bias 
        return tf.matmul(input_, matrix) + bias


def lrelu(x, leak=0.2, name="lrelu"):
    return tf.maximum(x, leak*x)

def cos_relative_positions(X):
    x_cos_1 = tf.cos(X / 1000000000000000)
    x_cos_2 = tf.cos(X / 10000000)
    x_cos_3 = tf.cos(X / 1000)
    x_cos_4 = tf.cos(X / 10)
    x_cos_5 = tf.cos(X)
    return tf.concat([x_cos_1, x_cos_2, x_cos_3, x_cos_4, x_cos_5], axis=-1)



def read_and_decode(tfrecords_filename, batch_size):

    filename_queue = tf.train.string_input_producer(tfrecords_filename, num_epochs=100)

    reader = tf.TFRecordReader()

    _, serialized_example = reader.read(filename_queue)

    features = tf.parse_single_example(
      serialized_example,
      # Defaults are not specified since both keys are required.
      features={
        'label': tf.FixedLenFeature([], tf.int64),
        'seq_len': tf.FixedLenFeature([], tf.int64),
        'read_length': tf.FixedLenFeature([], tf.string),
        'read_addr': tf.FixedLenFeature([], tf.string),
        'ip': tf.FixedLenFeature([], tf.string),
        'sp': tf.FixedLenFeature([], tf.string),
        'write_length': tf.FixedLenFeature([], tf.string),
        'write_addr': tf.FixedLenFeature([], tf.string),
        'instruction_id': tf.FixedLenFeature([], tf.string),
        'read2_length': tf.FixedLenFeature([], tf.string),
        'read2_addr': tf.FixedLenFeature([], tf.string),
        'bp': tf.FixedLenFeature([], tf.string)
        })

    label = tf.cast(features['label'], tf.int32)
    #seq_len = tf.cast(features['seq_len'], tf.int32)
    seq_shape = [SEQ_LEN, 1]

    list_vars = []

    for field in ['read_length', 'read_addr', 'ip', 'sp', 'write_length', 'write_addr', 'read2_addr', 'read2_length', 'bp']:

        new_field = tf.reshape(tf.decode_raw(features[field], tf.float64), seq_shape)
        relative_field = tf.cast(cos_relative_positions(new_field), tf.float32)
        tf.summary.histogram('cos_relative_positions_{}'.format(field), relative_field)
        list_vars.append(relative_field)
        print(relative_field)

    print(tf.concat(list_vars, axis=-1))

    instruction_id = tf.cast(tf.reshape(tf.decode_raw(features['instruction_id'], tf.float64), seq_shape), tf.int32)




    X, instruction_ids, Y = tf.train.shuffle_batch([tf.concat(list_vars, axis=-1), instruction_id, label],
                                             batch_size=batch_size,
                                             capacity=30,
                                             num_threads=2,
                                             min_after_dequeue=10)
    return X, instruction_ids, Y





class CNN():

    def __init__(self, batch_size, tfrecord_dir, vocab_path, is_training=True):

        def batch_norm(X, name='batch_norm', is_training=is_training):
            return tf.contrib.layers.batch_norm(X, 
                                    decay=0.9, 
                                    updates_collections=None,
                                    epsilon=1e-5,
                                    scale=True,
                                    reuse=tf.AUTO_REUSE,
                                    is_training=is_training,
                                    scope=name)

        tfrecords = [os.path.join(tfrecord_dir, f) for f in ['1521816829.2.tf', '1521816845.16.tf', '1521816921.89.tf', '1521817243.39.tf', '1521817539.22.tf', '1521817841.11.tf', '1521818138.95.tf']]# os.listdir(tfrecord_dir)]
                          
        X, instruction_ids, Y = read_and_decode(tfrecords, batch_size)

        # self.X = tf.placeholder(tf.float32, shape=[batch_size, None, 10])
        # print(self.X)
        X = tf.reshape(X, [batch_size, -1, 1, X.shape[-1]])
        # print(X)
        # self.Y = tf.placeholder(tf.int64, shape=[batch_size])
        Y_one_hot = tf.one_hot(Y, depth=2)

        instruction_embeddings = tf.get_variable("instruction_embeddings", [len(load_vocab(vocab_path)), 5])
        embedded_instruction_ids = tf.nn.embedding_lookup(instruction_embeddings, instruction_ids)
        
        X = tf.concat([X, embedded_instruction_ids], axis=-1)
        print(X)

        def classifier(x, keep_prob):

            print('classifier')
            h0 = conv2d(x, 64, name='c_h0_conv')
            h0 = batch_norm(h0, name='c_h0_bn')
            h0 = lrelu(h0)
            h0 = tf.nn.dropout(h0, keep_prob=keep_prob)
            print(h0)
            h1 = conv2d(h0, 128, name='c_h1_conv')
            h1 = batch_norm(h1, name='c_h1_bn')
            h1 = lrelu(h1)
            h1 = tf.nn.dropout(h1, keep_prob=keep_prob)
            print(h1)
            h2 = conv2d(h1, 256, name='c_h2_conv')
            h2 = batch_norm(h2, name='c_h2_bn')
            h2 = lrelu(h2)
            h2 = tf.nn.dropout(h2, keep_prob=keep_prob)
            
            #Average over instructions
            h2 = tf.reduce_mean(h2, axis=1)
            print(h2)
            h2 = tf.reshape(h2, [batch_size, -1])

            h3 = linear(h2, 32, 'c_h3_lin')
            h3 = batch_norm(h3, name='c_h3_lin_bn')
            h3 = tf.nn.dropout(h3, keep_prob=keep_prob)
            h4 = linear(h3, 2, 'c_h4_lin')
            return h4


        with tf.variable_scope('c_cnn_classifier'):
            logits = classifier(X, keep_prob=0.3)
            test_logits = classifier(X, keep_prob=1.0)

            self.c_vars = [var for var in tf.trainable_variables() if 'c_' in var.name]

            self.loss = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(logits=logits, labels=Y_one_hot))
            self.test_loss = tf.reduce_mean(tf.nn.softmax_cross_entropy_with_logits(logits=test_logits, labels=Y_one_hot))

            tf.summary.scalar('loss', self.loss)

            self.accuracy = tf.reduce_mean(tf.cast(tf.equal(tf.argmax(logits, axis=1), tf.argmax(Y_one_hot, axis=1)), tf.float32))
            self.test_accuracy = tf.reduce_mean(tf.cast(tf.equal(tf.argmax(test_logits, axis=1), tf.argmax(Y_one_hot, axis=1)), tf.float32))
            self.test_confusion_matrix = tf.confusion_matrix(labels=Y, predictions=tf.argmax(test_logits, axis=1), num_classes=2)

            tf.summary.scalar('accuracy', self.accuracy)

            # Create an ExponentialMovingAverage object
            ema = tf.train.ExponentialMovingAverage(decay=0.40)
            maintain_averages_op = ema.apply([self.test_accuracy, self.test_loss])
            update_ops = [maintain_averages_op]

            self.ema_test_loss = ema.average(self.test_loss)
            self.ema_test_accuracy = ema.average(self.test_accuracy)

            self.class_preds = tf.argmax(test_logits, axis=1)
            self.logits_preds = tf.nn.softmax(test_logits)

            with tf.control_dependencies(update_ops):
                self.optimizer = tf.train.AdamOptimizer(learning_rate=0.001).minimize(self.loss, var_list=self.c_vars)

            self.c_global_vars = filter(lambda x: x.name.startswith('c_'), tf.global_variables())
