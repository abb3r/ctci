#! /bin/bash

echo build running..
if [ ! -d build ]; then
 mkdir build
fi

cd build
cmake -G "MinGW Makefiles" ../src
make 
#./runCode abber tahir cba cdab
./unittests/runTests
