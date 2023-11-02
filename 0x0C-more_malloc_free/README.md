#The Awesome Memory Allocation Duo 🚀

Welcome to the world of dynamic memory allocation with our fantastic functions! We promise they won't just allocate memory; they'll also allocate a big smile on your face. 💫

## Functions That Rock Your Memory World

### 1. `malloc_checked(unsigned int b)`

You've got a desire for memory? We've got you covered! This function allocates memory using `malloc` and ensures you get your fair share of bytes. But, beware, if `malloc` decides to take a vacation, we'll send it a message with status code 98. We take memory allocation very seriously!

### 2. `str_concat(char *s1, char *s2)`

Need to concatenate two strings without breaking a sweat? Look no further! Our `str_concat` function will merge two strings into one, making you the master of text fusion. It's string concatenation made as easy as mixing peanut butter and jelly!

## Quick Start

1. Clone this repo - "TheAwesomeMemoryAllocationDuo"
2. Include our header file `main.h` in your project.
3. Call our memory allocation functions and let the magic begin!

```c
#include "main.h"

int main(void) {
    char *result = str_concat("Hello", " World");
    printf("%s\n", result);
    free(result);
    return (0);
}
Contributing
Want to make these functions even more fantastic? Contribute to our memory circus! Whether it's bug fixes, performance improvements, or adding new features, we welcome your creativity and humor.

Let's Keep the Laughs Rolling
At "The Awesome Memory Allocation Duo," we believe that programming can be fun, exciting, and engaging. Memory management may sound serious, but we're here to prove that it can also be a blast. So, join the fun and start allocating memory like a pro!
stay funny,stay coding.
