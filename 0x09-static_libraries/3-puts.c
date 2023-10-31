#include "main.h"
#include <unistd.h>

/**
 * _puts - a function that prints a string, followed by a new line, to stdout.
 *   * @s: The string to be printed.
 *
 *     * Return: Nothing.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		write(1, s, 1);
		s++;
	}
	_putchar('\n');
}

