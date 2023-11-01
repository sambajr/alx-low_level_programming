#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *  * _strdup - Duplicate a string.
 *   * @str: The string to duplicate.
 *    *
 * Return: A pointer to the duplicated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	int n;
	char *ptr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	n = strlen(str);

	ptr = (char *)malloc((n + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		ptr[i] = str[i];
	}
	ptr[n] = '\0';
	return (ptr);
}
