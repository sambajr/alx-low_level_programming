#include "main.h"
/**
* print_sign - Print the sign of a number (+, 0, or -).
* @n: The number to check.
* Return: + if @n is positive, 0 if @n is zero, - if @n is negative.
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
