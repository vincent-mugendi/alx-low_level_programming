#!/bin/bash

# Compile all .c files in the current directory into liball.so

# List all .c files in the current directory and save them in a variable
c_files=$(ls *.c)

# Compile the .c files into object files
for file in $c_files; do
    gcc -c -fPIC $file -o ${file%.c}.o
done

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Clean up object files
rm *.o

echo "Dynamic library liball.so created."
