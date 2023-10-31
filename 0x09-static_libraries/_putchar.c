#include "main.h"
#include <unistd.h>
/**
 *  * _putchar - Writes the character c to stdout.
 *   * @c: The character to be written.
 *    *
 *Return: On success, the character is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
