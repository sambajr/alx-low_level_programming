#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *  * alloc_grid - Allocate and initialize a 2D grid with zeros.
 *   * @width: The width of the grid.
 *    * @height: The height of the grid.
 *Return: A pointer to the allocated grid, or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j, w, h;
	int **array;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);
	w = width;
	h = height;
	array = (int **)malloc(h * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		array[i] = (int *)malloc(w * sizeof(int));
		if (array[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w ; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
