#include <stdlib.h>
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *  * _calloc - Allocates memory for an array, initializes it to zero
 *   * @nmemb: Number of elements
 *    * @size: Size of each element
 *     *
 *      * Return: A pointer to the allocated memory or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t *array;
	size_t total;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(total);
	if (array == NULL)
		return (NULL);
	memset(array, 0, total);
	return (array);
}
