#!/bin/bash -e

# compile lua
cd lua
make -j4
cd ..

rm -r build
mkdir build
cd build
cmake .. && make

cp ../lib/* ..


