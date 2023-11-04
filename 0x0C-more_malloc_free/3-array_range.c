#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers from min to max (inclusive)
 * @min: The minimum value
 * @max: The maximum value
 *     *
 *Return: A pointer to the newly created array or NULL on failure
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		array[i] = min + i;
	}
	return (array);
}
