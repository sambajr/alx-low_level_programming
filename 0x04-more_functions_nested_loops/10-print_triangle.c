#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less,
 * Otherwise, it prints a triangle with the specified pattern
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size - i; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		for (i = 0; i < 2; i++)
		{
			for (j = 1; j < size; j++)
			{
				_putchar(' ');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}

