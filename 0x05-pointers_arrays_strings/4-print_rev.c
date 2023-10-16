#include "main.h"
#include <unistd.h>
/**
 *  * print_rev - Prints a string in reverse order to stdout.
 *   * @s: A pointer to a null-terminated string.
 *    *
 *     * Description:
 *      * This function calculates the length of the string and then prints
 *       * the characters of the string in reverse order to the st
 *        *
 *         * @s: The string to be printed in reverse.
 *
 *
 */
void print_rev(char *s)
{
	int length, i;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = length - 1; i >= 0 ; i--)
	{
		write(1, &s[i], 1);
	}
}
