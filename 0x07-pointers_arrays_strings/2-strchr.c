#include "main.h"
#include <string.h>
/**
 *  * _strchr - Locate the first occurrence of a character in a string.
 *   * @s: The string to search.
 *@c: The character to find within the string.
 *
 *Description:
 *This function searches for the first occurrence of 'c' in  's'.
 *If found, it returns a pointer to that character; otherwise, it returns NULL.
 *Return: A pointer to the first occurrence of 'c' in 's' or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);

	if (result != NULL)
	{
		return (result);
	}
	else
	{
		return (NULL);
	}
}
