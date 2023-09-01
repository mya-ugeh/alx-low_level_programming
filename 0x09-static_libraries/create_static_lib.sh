#!/bin/bash

# Compile all .c files in the current directory and create an object file for each
gcc -c *.c

# Create a static library named liball.a from all the object files
ar rcs liball.a *.o

# Clean up the temporary object files
rm -f *.o
