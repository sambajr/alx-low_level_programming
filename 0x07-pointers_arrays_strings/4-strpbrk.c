#include "main.h"
#include <string.h>
/**
 *_strpbrk - Find the first occurrence of any character in 'accept' within 's'.
 *@s: The string to search.
 *@accept: Characters to search for.
 *
 *Description: This function finds the first matching character in 's' from
 *'accept'.
 *Return: Pointer to the first matching character or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
