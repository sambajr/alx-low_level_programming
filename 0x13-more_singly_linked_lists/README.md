# Singly Linked List Printer

## Overview
This simple C program provides a user-friendly function to print all the elements of a singly linked list. The program defines a structure for a singly linked list node (`listint_t`) and includes a function (`print_listint`) that takes the head of the list as input, printing each element and returning the total number of nodes.

## Usage
1. Include the provided `lists.h` header file in your program.
2. Link your program with the compiled object file containing the `print_listint` function.
3. Call `print_listint` with the head of your `listint_t` list to display its elements.

## Example
```c
#include "lists.h"
#include <stdio.h>

int main(void)
{
    listint_t *head = NULL;

    /* Populate your linked list (not shown here) */

    size_t nodes = print_listint(head);
    printf("Number of nodes: %lu\n", nodes);

    return 0;
}
Build
Compile your program with the necessary files using your preferred C compiler. For example:

bash
Copy code
gcc your_program.c print_listint.c -o your_program
Contributions
Contributions are welcome! If you find any issues or have suggestions for improvements, feel free to open an issue or submit a pull request.

Happy coding!
