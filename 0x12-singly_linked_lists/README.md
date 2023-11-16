# Project Title

Short description or tagline for your project.

## print_list Function

The `print_list` function is designed to print all the elements of a singly linked list.

## Table of Contents

- [Description](#description)
- [Requirements](#requirements)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Description

The `print_list` function is part of a project that involves singly linked lists. It takes a pointer to the head of a list (`list_t`) and prints the length and string of each node. If the string is `NULL`, it prints "[0] (nil)". The function returns the number of nodes in the list.

## Requirements

- This project is written in C.
- Ensure you have a C compiler installed.

## Getting Started

To use the `print_list` function in your project, follow these steps:

1. Clone the repository:

   ```bash
   $ git clone https://github.com/your-username/your-repository.git
   $ cd your-repository
Include the header file in your source code:

c
Copy code
#include "list.h"
Use the print_list function in your code:

c
Copy code
size_t node_count = print_list(your_list_head);
Usage
Here's an example of how to use the print_list function:

c
Copy code
#include <stdio.h>
#include "list.h"

int main(void)
{
    list_t *head = /* create your list */;
    size_t nodes = print_list(head);
    printf("Number of nodes: %lu\n", nodes);

    return 0;
}
Contributing
If you'd like to contribute to this project, please follow the guidelines outlined in the Contributing document
