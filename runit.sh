#!/bin/bash

# shortcut to compile and run the program

rm -f a.out
g++ -g -std=c++11 -Wall -Wextra -Wno-sign-compare *.cpp
./a.out input1.txt svg1.svg
./a.out input2.txt svg2.svg
./a.out input3.txt svg3.svg
./a.out input4.txt svg4.svg
./a.out input5.txt svg5.svg

# on Mac, use "open htmlfile"
# on Windows, use "start htmlfile"

