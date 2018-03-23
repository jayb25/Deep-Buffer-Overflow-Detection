import os
from cnn  import CNN
import random
import tensorflow as tf
import numpy as np
import sys

random.seed(42)
np.random.seed(42)
#tf.reset_default_graph()
tf.set_random_seed(0)

#os.environ["CUDA_VISIBLE_DEVICES"]="0"



#Try filtering samples only letting one the the discriminator says are good into the model


class TrainCNN:

    def __init__(self, batch_size, tfrecord_dir, vocab_path):

      
        self.logdir = '../models/cnn'
        self.batch_size = batch_size
        self.cnn = CNN(batch_size=batch_size, tfrecord_dir=tfrecord_dir, vocab_path=vocab_path)
        self.merged = tf.summary.merge_all()
       
    def train(self, print_steps=1, display_data=100, save_steps=10000):
        config = tf.ConfigProto()
        config.gpu_options.allow_growth=True
        sess = tf.InteractiveSession(config=config)

        init_op = tf.group(tf.global_variables_initializer(),
                   tf.local_variables_initializer())
        sess.run(init_op)
        coord = tf.train.Coordinator()
        threads = tf.train.start_queue_runners(coord=coord)
    
        train_writer = tf.summary.FileWriter(self.logdir, sess.graph)
        cnn_saver = tf.train.Saver(self.cnn.c_global_vars)

        # if os.path.exists('{}/checkpoint'.format(self.logdir)):
        #     with open('{}/checkpoint'.format(self.logdir), 'rb') as f:
        #         model_name = next(f).split('"')[1]
        #     print(model_name)
        #     saver.restore(sess, "{}/{}".format(self.logdir, model_name))
        
        #test_batcher = self.data_loader.random_test_batch(self.batch_size)
        #train_batcher = self.data_loader.random_train_batch(self.batch_size)
        
        
        for i in range(1000000):
            # X, Y = next(train_batcher)

            _= sess.run(self.cnn.optimizer)

            if i % 20 == 0:
                summary = sess.run(self.merged)
                train_writer.add_summary(summary, i)
            if (i+1) % save_steps == 0:
                cnn_saver.save(sess, '{}/cnn.ckpt'.format(self.logdir), i)
            if (i+1) % print_steps == 0:
                np.set_printoptions(precision=3)
                train_loss, train_accuracy = sess.run([self.cnn.loss, self.cnn.accuracy])
                # X_test, Y_test = next(test_batcher)
                test_loss, test_accuracy, test_confusion_matrix = sess.run([self.cnn.test_loss, self.cnn.test_accuracy, self.cnn.test_confusion_matrix])

                print('Step = {}, Test Loss = {}, Train Loss = {}, Test Accuracy = {}, Train Accuracy = {}'.format(i, test_loss, train_loss, test_accuracy, train_accuracy))
                print('Confusion_Matrix')
                print(test_confusion_matrix)

if __name__ == '__main__':
    assert len(sys.argv) == 3
    #sys.argv[1] = tfrecords dir
    #sys.argv[2] = vocab file
    cnn = TrainCNN(batch_size=16, tfrecord_dir=sys.argv[1], vocab_path=sys.argv[2])
    cnn.train()

