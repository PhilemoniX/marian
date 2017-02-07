
# AmuNMT
[![Build Status](http://filipg-jenkins.wmi.amu.edu.pl:8090/job/amunmt-cpu/badge/icon)](http://filipg-jenkins.wmi.amu.edu.pl:8090/job/amunmt-cpu/)

A C++ inference engine for Neural Machine Translation (NMT) models trained with Theano-based scripts from
Nematus (https://github.com/rsennrich/nematus) or DL4MT (https://github.com/nyu-dl/dl4mt-tutorial)

We aim at keeping compatibility with Nematus (at least as long as there is no training framework in AmunNMT), the continued compatbility with DL4MT will not be guaranteed.

If you use this, please cite:

Marcin Junczys-Dowmunt, Tomasz Dwojak, Hieu Hoang (2016). Is Neural Machine Translation Ready for Deployment? A Case Study on 30 Translation Directions (https://arxiv.org/abs/1610.01108)

## Recommended for GPU version:
Tested on Ubuntu 14.04 LTS
 * CMake 3.5.1 (due to CUDA related bugs in earlier versions)
 * GCC/G++ 4.9
 * Boost 1.54
 * CUDA 7.5

Tested on Ubuntu 16.04 LTS
 * CMake 3.5.1 (due to CUDA related bugs in earlier versions)
 * GCC/G++ 5.4
 * Boost 1.61
 * CUDA 8.0

Also compiles the CPU version.

## Recommended for CPU version:
The CPU-only version will automatically be compiled if CUDA cannot be detected by CMAKE. Tested on different machines and distributions:
 * CMake 3.5.1
 * The CPU version should be a lot more forgiving concerning GCC/G++ or Boost versions.

## Compilation
The project is a standard Cmake out-of-source build:

    mkdir build
    cd build
    cmake ..
    make -j

If you want to compile only CPU version on a machine with CUDA, add `-DCUDA=OFF`  flag:

    cmake -DCUDA=OFF ..

## Vocabulary files
Vocabulary files (and all other config files) in AmuNMT are by default YAML files. AmuNMT also reads gzipped yml.gz files.

* Vocabulary files from models trained with Nematus can be used directly as JSON is a proper subset of YAML.
* Vocabularies for models trained with DL4MT (\*.pkl extension) need to be converted to JSON/YAML with either of the two scripts below:
```
python scripts/pkl2json.py vocab.en.pkl > vocab.json
python scripts/pkl2yaml.py vocab.en.pkl > vocab.yml
```


## Running AmuNMT

    ./bin/amun -c config.yml <<< "This is a test ."

## Configuration files

An example configuration:

    # Paths are relative to config file location
    relative-paths: yes

    # performance settings
    beam-size: 12
    devices: [0]
    normalize: yes
    gpu-threads: 1

    # scorer configuration
    scorers:
      F0:
        path: model.en-de.npz
        type: Nematus

    # scorer weights
    weights:
      F0: 1.0

    # vocabularies
    source-vocab: vocab.en.yml.gz
    target-vocab: vocab.de.yml.gz

## BPE Support

AmuNMT has integrated support for [BPE encoding](https://github.com/rsennrich/subword-nmt). There are two option `bpe` and `debpe`. The `bpe` option receives a path to a file with BPE codes (here `bpe.codes`). To turn on desegmentation on the ouput, set `debpe` to `true`, e.g.

    bpe: bpe.codes
    debpe: true

## Using GPU/CPU threads
AmuNMT can use GPUs, CPUs, or both, to distribute translation of different sentences. 

    cpu-threads: 8
    gpu-threads: 2
    devices: [0, 1]

The setting above uses 8 CPU threads and 4 GPU threads (2 GPUs x 2 threads). The `gpu-threads` and `devices` options are only available when AmuNMT has been compiled with CUDA support. Multiple GPU threads can be used to increase GPU saturation, but will likely not result in a large performance boost. By default, `gpu-threads` is set to `1` and `cpu-threads` to `0`  if CUDA is available. Otherwise `cpu-threads` is set to `1`. To disable the GPU set `gpu-threads` to `0`. Setting both `gpu-threads` and `cpu-threads` to `0` will result in an exception.

## Example usage

  * [Data and systems for our winning system in the WMT 2016 Shared Task on Automatic Post-Editing](https://github.com/emjotde/amunmt/wiki/AmuNMT-for-Automatic-Post-Editing)
