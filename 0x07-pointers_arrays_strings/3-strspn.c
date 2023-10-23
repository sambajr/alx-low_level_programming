#include "main.h"
#include <string.h>
/**
 *  * _strspn - Calculate the length of a prefix substring.
 *   * @s: The string to search.
 *    * @accept: The string containing characters to search for.
 *Description:
 *This function calculates the length of the string 's' that consists
 *of characters found in the 'accept' string.
 *Return: The length of the prefix substring in 's'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = strspn(s, accept);

	return (i);
}
