#!/bin/bash
gcc -Wall -fpic -c *.c
gcc -shared -o liball.so *.o
