#include "main.h"

/**
* print_to_98 - Prints natural numbers from n to 98.
* @n: The starting number.
*/
void print_to_98(int n)
{
	int i;
	int num = 98

	if (n <= 98)
	{
		for (i = n; i <= 98; n++)
		{
			if (i < 98)
			{
				_putchar('num' + '0');
				_putchar('n' + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');:wq
			}
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i > 98)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				_putchar('\n');
			}
		}
	}
}
