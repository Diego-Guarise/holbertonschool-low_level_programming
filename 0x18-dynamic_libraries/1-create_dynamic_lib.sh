#!/bin/bash
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH
