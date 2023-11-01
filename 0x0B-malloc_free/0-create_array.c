#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * create_array - creates an array of size[n] and initializing c
 * @size: size of array
 * @c: character in question
 * Return: if sze is equal to 0 Return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (size > 0)
	{
		ptr = (char *)malloc(size * sizeof(char));
		if (ptr == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);

}
