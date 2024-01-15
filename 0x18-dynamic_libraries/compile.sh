#!/bin/bash

# Compile C code into a shared library
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC -o 100-operations.so 100-operations.c
