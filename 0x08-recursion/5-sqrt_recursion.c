#include "main.h"

/**
 * _sqrt - Find the natural square root of a number
 * @n: The number for which to find the square root
 *
 * Return: The square root if found, -1 if not found (or if n is negative)
 */
int _sqrt_recursion(int n)
{
	int guess;
	if (n < 0)
	{
		return (-1);
	}
       
	guess = 0;

	while (guess * guess <= n)
	{
		if (guess * guess == n)
		{
			return (guess);
		}
		guess++;
	}
	return (-1);
}

