#include "main.h"
#include <unistd.h>

/**
* print_char - Prints a character to the screen.
* @c: The character to be printed.
*
* Description: This function prints a character to the standard output (screen).
*/
void print_char(char c)
{
	write(1, &c, 1);
}

