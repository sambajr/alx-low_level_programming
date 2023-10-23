
n

## Description

The `_memset` function is designed to fill a memory area with a constant byte. It takes a pointer to a memory area, a constant byte, and the number of bytes to fill. This function leverages the standard library function `memset` to perform the memory-filling operation. It is a simple utility function commonly used in C programming to initialize or set the content of a memory region to a specified value.

## Usage

To use the `_memset` function, follow these steps:

1. Include the necessary header file (e.g., `main.h`) that contains the function prototype.

2. Call the `_memset` function with the following parameters:
   - `s`: A pointer to the memory area to be filled.
   - `b`: The constant byte to fill the memory area with.
   - `n`: The number of bytes to fill with the constant byte.

3. The function will return a pointer to the memory area `s` after it has been filled.

```c
#include "main.h"
#include <string.h>

int main() {
    char buffer[10];
    char *result;
    char fillByte = 'A';
    unsigned int size = 5;

    result = _memset(buffer, fillByte, size);

    // Now, the 'buffer' array contains 'size' bytes filled with 'fillByte'.

    return 0;
}
###############
# _memcpy Function

## Description

The `_memcpy` function is a C utility function used to copy a specified number of bytes from one memory area to another. It is a fundamental operation in C programming for efficiently transferring data from one location in memory to another.

## Usage

To use the `_memcpy` function, follow these steps:

1. Include the necessary header file (e.g., `main.h`) that contains the function prototype.

2. Call the `_memcpy` function with the following parameters:
   - `dest`: Destination memory area where you want to copy the data.
   - `src`: Source memory area from which you want to copy the data.
   - `n`: Number of bytes to copy from `src` to `dest`.

3. The function will copy the specified number of bytes from the source (`src`) to the destination (`dest`).

```c
#include "main.h"

int main() {
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    _memcpy(buffer + 50, buffer2, 10);

    // Now, the data from 'buffer2' has been copied to 'buffer' starting at position 50.
    
    return 0;
}

