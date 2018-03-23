import os
import ast
from sklearn.model_selection import train_test_split
import random
import json
import numpy as np
import pickle
import time
import sys
import tensorflow as tf

random.seed(1043)

#Unkown instruction sym
UNK = 'UNK'
MIN_UNK_COUNT = 1000
MAX_TF_SIZE = 10
SEQ_LEN = 146944


def main():
    vul_code_dir = sys.argv[1]
    code_dir = sys.argv[2]
    output_dir = sys.argv[3]
    vocab_path = sys.argv[4]

    vul_code_files = [os.path.join(vul_code_dir, f) for f in os.listdir(vul_code_dir)]
    code_files = [os.path.join(code_dir, f) for f in os.listdir(code_dir)]

    vocab = create_load_vocab(vocab_path, vul_code_files+code_files)
    create_tf_records(output_dir, vul_code_files, code_files, vocab)


def _bytes_feature(value):
    return tf.train.Feature(bytes_list=tf.train.BytesList(value=[value]))

def _int64_feature(value):
    return tf.train.Feature(int64_list=tf.train.Int64List(value=[value]))



def create_load_vocab(vocab_file_path, files):
    if os.path.exists(vocab_file_path):
        #Read saved instruction vocab
        with open(vocab_file_path, 'r') as f:
            #Read first line as dict
            ivocab = ast.literal_eval(next(f))
    else:
        random.shuffle(files)
        ivocab = create_new_instruction_vocab(files[:50])
        with open(vocab_file_path, 'w') as f:
            #Write so literal_eval can read
            f.write(str(ivocab))
    return ivocab

def create_new_instruction_vocab(files):
    print('Creating Vocab')
    vocab_counts = {UNK:100000} #{instruction:count}
    for i, file in enumerate(files):
        print('Creating Vocab on file {} of {}'.format(i+1, len(files)))
        with open(file, 'r') as f:
            for line in f:
                try:
                    #Malformed json check
                    data_point = json.loads(line)
                except:
                    continue
                instruction = data_point['disassembly'].split(' ')[0]
                if instruction not in vocab_counts:
                    vocab_counts[instruction] = 0
                vocab_counts[instruction] += 1
    vocab = {}
    for instruction, count in vocab_counts.items():
        if count > MIN_UNK_COUNT:
            vocab[instruction] = len(vocab) 
    return vocab



def create_tf_records(output_dir, vul_code_files, code_files, vocab):
    #Create labels
    lables = []
    lables.extend([0]*len(code_files))
    lables.extend([1]*len(vul_code_files))
    files = code_files + vul_code_files

    #Suffle data
    xy = zip(files, lables)
    random.shuffle(xy)

    writer = tf.python_io.TFRecordWriter(os.path.join(output_dir, '{}.tf'.format(time.time())))
    for i, [file, label] in enumerate(xy):
        print('Creating tfrecords for file {} of {}'.format(i+1, len(xy)))
        #{read_length:[], read_addr:[], ip:[], sp:[], write_length:[], write_addr:[], instruction_id:[], read2_length:[], read2_addr:[], bp:[]}
        try:
            #The json may be malformed if generation was interrupted
            sample = create_sample(file, vocab)
        except:
            #Just skip if malformed
            continue
        

        example = tf.train.Example(features=tf.train.Features(feature={
            'label': _int64_feature(np.int64(label)),
            'seq_len': _int64_feature(np.int64(SEQ_LEN)),
            'read_addr': _bytes_feature(np.array(sample['read_addr'], dtype=np.float64).tostring()),
            'ip': _bytes_feature(np.array(sample['ip'], dtype=np.float64).tostring()),
            'sp': _bytes_feature(np.array(sample['sp'], dtype=np.float64).tostring()),
            'write_length': _bytes_feature(np.array(sample['write_length'], dtype=np.float64).tostring()),
            'write_addr': _bytes_feature(np.array(sample['write_addr'], dtype=np.float64).tostring()),
            'instruction_id': _bytes_feature(np.array(sample['instruction_id'], dtype=np.float64).tostring()),
            'read2_length': _bytes_feature(np.array(sample['read2_length'], dtype=np.float64).tostring()),
            'read2_addr': _bytes_feature(np.array(sample['read2_addr'], dtype=np.float64).tostring()),
            'bp': _bytes_feature(np.array(sample['bp'], dtype=np.float64).tostring()),
            'read_length': _bytes_feature(np.array(sample['read_length'], dtype=np.float64).tostring())}))

        writer.write(example.SerializeToString())

        #Check if tfrecord has max samples 
        if(i+1) % MAX_TF_SIZE == 0:
            writer.close()
            print('Creating new tfrecord')
            writer = tf.python_io.TFRecordWriter(os.path.join(output_dir, '{}.tf'.format(time.time())))
    writer.close()




def create_sample(file, ivocab):

    def create_empty_sample():
        sample = {
                'read_length':[], 
                'read_addr':[], 
                'ip':[], 
                'sp':[], 
                'write_length':[], 
                'write_addr':[], 
                'instruction_id':[], 
                'read2_length':[], 
                'read2_addr':[], 
                'bp':[]
                }
        return sample
    #{read_length:[], read_addr:[], ip:[], sp:[], write_length:[], write_addr:[], instruction_id:[], read2_length:[], read2_addr:[], bp:[]}
    sample = create_empty_sample()

    with open(file, 'r') as f:
        for line in f:  

            data_point = json.loads(line)

            sample['read_length'].append(data_point['read']['length'])
            sample['read_addr'].append(data_point['read']['addr'])
            sample['ip'].append(data_point['ip'])
            sample['sp'].append(data_point['sp'])
            sample['write_length'].append(data_point['write']['length'])
            sample['write_addr'].append(data_point['write']['addr'])
            instruction = data_point['disassembly'].split(' ')[0]
            if instruction not in ivocab:
                instruction = UNK
            sample['instruction_id'].append(ivocab[instruction])

            if 'read2' in data_point:
                sample['read2_length'].append(data_point['read2']['length'])
                sample['read2_addr'].append(data_point['read2']['addr'])
            else:
                sample['read2_length'].append(0.0)
                sample['read2_addr'].append(0.0)

            sample['bp'].append(data_point['bp'])
    #Make same length
    for key in sample.keys():
        sample[key] = (sample[key]*int(SEQ_LEN/len(sample[key]) + 1))[:SEQ_LEN]
    return sample







if __name__ == '__main__':
    assert len(sys.argv) == 5
    main()




