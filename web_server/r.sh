#! /bin/bash

g++ -I . -fsanitize=address,undefined -fno-sanitize-recover=all *.cpp
./a.out

clang-format -i *.h
clang-format -i *.cpp
# clang-tidy *.cpp
