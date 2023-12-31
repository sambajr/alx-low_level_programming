#include "main.h"

/**
* print_last_digit - Prints the last digit of an integer.
* @n: The integer to extract the last digit from.
*
* Return: 0.
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;
	if (a < 0)
		a = -a;
	_putchar('0' + a);
	return (a);
}
