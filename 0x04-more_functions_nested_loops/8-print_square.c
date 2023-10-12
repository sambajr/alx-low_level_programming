#include "main.h"

/**
 * print_square - Prints a square using '#' characters.
 * @size: The size of the square.
 *
 * Description: If size is 0 or less,y prints a newline character.
 * Otherwise, it prints the specified size using '#' characters.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int ro, co;

		for (ro = 0; ro < size; ro++)
		{
			for (co = 0; co < size; co++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

