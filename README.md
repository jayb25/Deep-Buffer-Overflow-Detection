verflow Detection
 Detect existence of buffer overflows using program traces
 
 # Requirements
 - Tensorflow 1.6
 - numpy
 - sklearn
 
# Setup
To repurduce the results you will need 2TB of free disk space.
When cloning the project be sure to do a recursive clone to get submodule pytrace.
 ``` sh
git clone --recurse-submodules https://github.com/nmharmon8/Deep-Buffer-Overflow-Detection.git
```
To setup the environment:
``` sh
cd Deep-Buffer-Overflow-Detection
source env.sh
```
# Create Program Traces

Note -- Ask Spencer to add to repo 
Make pytrace act as modual
``` sh
cd pytrace
touch __init__.py
make
cd ..
```

Run trace collection for vulnerable code:
TODO -- Make helper script
``` sh
while true; do
#Some programs may have infinite loops so kill and restart
python smcollection.py ./vulnerable_code <output_dir> <tmp_build_dir> & sleep 100;kill $!;
#Cleanup after kill before restart
cd <output_dir>; find . -size -1k -delete; cd -;
done
```

Run trace collection for code:

``` sh
while true; do
#Some programs may have infinite loop so kill and restart
python smcollection.py ./code <output_dir> <tmp_build_dir> & sleep 100;kill $!;
#Cleanup after kill before restart
cd <output_dir>; find . -size -1k -delete; cd -
done
```
This could take a couple of days to collect a sufficient amount of data. Obviously this will not exit, given the while true. It just runs until you have as much data as you want. To make this faster just kick off a bunch of jobs with diffrent <tmp_build_dirs>.

Finaly convert program traces to tfrecords:

``` sh
python generate_tf_data.py <vulnerable_code_program_trace_dir> <code_program_trace_dir> <tfrecord_output_dir> <vocab_output_file>
```

You are ready to train a model!

# Training Model
``` sh
cd train_models
python train_cnn.py <tfrecord_output_dir> <vocab_file>
```
TODO fix model exit condition when out of data. currently it will just crash. The models will be saved to ./models

