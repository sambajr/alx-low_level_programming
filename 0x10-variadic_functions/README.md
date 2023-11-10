# Variadic Function: Sum Them All

## Description

This repository contains a C function, `sum_them_all`, that calculates the sum of all its parameters.

## Function Prototype

```c
int sum_them_all(const unsigned int n, ...);

Parameters
n: The number of parameters
...: A variable number of parameters to add
Return
If n == 0, the function returns 0.
Otherwise, the function returns the sum of all parameters.
Usage
Here’s an example of how to use the sum_them_all function:

#include <stdio.h>
#include "variadic_functions.h"

int main(void)
{
    printf("%d\n", sum_them_all(2, 98, 1024));
    printf("%d\n", sum_them_all(4, -1024, -98, 1, -1));
    printf("%d\n", sum_them_all(0));
    return (0);
}

Compilation
Use the following command to compile the code:

gcc -Wall -Werror -Wextra -pedantic *.c
