#include "main.h"

/**
 * print_triangle - Prints a triangle using '#' characters.
 * @size: The size of the triangle.
 *
 * Description: If size is  a newline character.
 * Otherwise, it prints a triangle  using '#' characters.
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
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

