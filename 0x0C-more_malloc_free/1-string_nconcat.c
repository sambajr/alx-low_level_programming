#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * string_nconcat - Concatenates two strings, up to n characters from s2
 *  @s1: The first string
 * @s2: The second string
 * @n: The maximum number of characters to concatenate from s2
 *
 *Return:A pointer to the newly allocated concatenated string / NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t len1, len2;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n >= len2)
	{
		n = len2;
	}
	ptr = (char *)malloc(len1 + n + 1);
	if (ptr != NULL)
	{
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
