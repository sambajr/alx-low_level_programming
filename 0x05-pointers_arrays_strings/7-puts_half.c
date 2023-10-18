#include "main.h"
#include <string.h>
/**
 *  * puts_half - Prints the second half of a string, or the l
 *   *             the string's length is odd, where n = (length_of_the_s.
 *    * @str: The string to be printed.
 */
void puts_half(char *str)
{
	int len = strlen(str);

	int start, i;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}
	for (i = len - start; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}


