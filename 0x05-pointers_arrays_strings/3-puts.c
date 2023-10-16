#include "main.h"
#include <unistd.h>
 /**
  *_puts - Prints a string followed by a newline to the standard output.
  *@str: A pointer to a null-terminated string to be printed.
  *
  *Description:
  *This function takes a pointer to a null-terminated string and prints it to
  *the standard output, followed by a newline character.
  *
  *@str: The string to be printed.
  */
void _puts(char *str)
{
	while ( *str != '\0')
	{
		write(1, str, 1);
	str++;
	}
	write(1, "\n", 1);
}
