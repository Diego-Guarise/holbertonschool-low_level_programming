#!/bin/bash
gcc -c -fPIC *.c
gcc *.o -shared -o liball.so
gcc -Wall -pedantic -Werror -Wextra -L. -ldynamic -o len
ldd len 
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
ldd len
./len
