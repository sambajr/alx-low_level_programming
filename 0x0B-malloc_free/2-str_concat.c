#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *  * str_concat - Concatenates two strings.
 *   * @s1: The first string.
 *    * @s2: The second string.
 *     *
 *      * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int s_1, s_2, s1_2;
	char *ptr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	s_1 = strlen(s1);
	s_2 = strlen(s2);
	s1_2 = s_1 + s_2;
	ptr = (char *)malloc((s1_2 + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s_1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < s_2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}

	ptr[s1_2] = '\0';

	return (ptr);
}



