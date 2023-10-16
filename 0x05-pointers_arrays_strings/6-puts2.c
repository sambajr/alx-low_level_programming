#include "main.h"
/**
 *  * puts2 - prints every other character  starting with the first
 *   *         character, followed by a new line.
 *    * @str: pointer to the string to print
 *     *
 *      * Return: void
 */
void puts2(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
	{
		if (str[len] % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
