import sys
import pyptrace.stackmonitor as sm 
import os
import json
import shutil
import random


def main():
    output_dir = sys.argv[2]
    local_build = sys.argv[3]
    try:
        input_files = [os.path.join(sys.argv[1], f) for f in os.listdir(sys.argv[1])]
        while(True):
        #for i, input_file in enumerate(input_files):
            #print('Collecting for {} of {}'.format(i+1, len(input_files)))
            input_file = random.choice(input_files)
            binary_path = compile_code(input_file, local_build)
            if binary_path:
                collect_features(binary_path, os.path.join(output_dir, input_file.split('/')[-1].split('.')[0]))
            else:
                #Remove unusable file 
                os.remove(input_file)
    finally:
        #Clean up
        if os.path.exists(local_build):
            shutil.rmtree(local_build)


def compile_code(file_path, local_build):
    #Try make local build dir
    if not os.path.exists(local_build):
        os.makedirs(local_build)
    #Clean out any files in the build dir
    leftover_files = [os.path.join(local_build, f) for f in os.listdir(local_build)]
    for file in leftover_files:
        os.remove(file)
    os.system('gcc {} -o {}'.format(file_path, os.path.join(local_build, 'a.out')))
    #Return if successfully built 
    if os.path.exists(os.path.join(local_build, 'a.out')):
        return os.path.join(local_build, 'a.out')
    else:
        return None

def collect_features(input_binary, output_file_path):
    try:
        with open(output_file_path, 'wb') as f:
            for i, x in enumerate(sm.monitor(input_binary)):
                del x['write']['data']
                del x['read']['data']
                if 'read2' in x:
                    del x['read2']['data']
                f.write("{}\n".format(json.dumps(x)))
    except:
        if os.path.exists(output_file_path):
            os.remove(output_file_path)

if __name__ == '__main__':
    assert len(sys.argv) == 4
    #sys.argv[1] == 'Input Dir'
    #sys.argv[2] == 'Output Dir'
    #sys.argv[3] == 'Local Build Dir'
    main()

#Example command "python smcollection.py data/vulnerable_code data/vulnerable_code_features/ ./vulnerable_code_local_build_dir"
#Example command "python smcollection.py data/code data/code_features/ code_build_dir/"
