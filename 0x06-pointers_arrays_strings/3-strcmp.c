#include "main.h"
#include <string.h>

/**
 *_strcmp - Compares two strings.
 *
 *@s1: The first string.
 *@s2: The second string.
 *
 *Return: Result of comparison (0 if equal).
 *
 *This function compares two strings, 's1' and 's2', character by character.
 */
int _strcmp(char *s1, char *s2)
{
	int ptr = strcmp(s1, s2);

	return (ptr);
}
