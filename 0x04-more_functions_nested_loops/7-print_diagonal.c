#include "main.h"

/**
 * print_diagonal - Draws a diagonal line of backslashes in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is 0 or lestion only prints a newline character.
 * Otherwise, it prints the character '\' n times, followed by a newline.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

