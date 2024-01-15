#include "main.h"

/**
 * _strlen - Calculate the length of a string.
 * @s: The input string.
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len); /* Placeholder return value, change as needed */
}
