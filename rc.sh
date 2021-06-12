rm -rf out; mkdir out
BUILD=out/build_$1.o

echo "Compiling C program using gcc"
gcc -o $BUILD $1 -Wall -Werror

echo "\n*******Output*******\n"

./$BUILD

echo "\n******END*****\n"
