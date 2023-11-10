#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *  * sum_them_all - sums all parameters of the function
 *   * @n: the number of parameters
 *    *
 *     * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum, value;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);

	sum = 0;
	for (i = 0; i < n; ++i)
	{
		value = va_arg(args, int);
		sum += value;
	}
	return (sum);
}
