# print_name Function

## Description
The `print_name` function is designed to print a given name using a specified function pointer.

## Prototype
```c
void print_name(char *name, void (*f)(char *));
Usage
Parameters:

name: The name to be printed.
f: A function pointer specifying how to print the name.
Example:
#include <stdlib.h>

void custom_print(char *name);

int main(void)
{
    char *myName = "John Doe";
    print_name(myName, custom_print);
    return (0);
}
Additional Notes
Only the standard library functions malloc, free, and exit are allowed.
Custom print functions, like custom_print in the example, should be defined to customize the printing behavior.
