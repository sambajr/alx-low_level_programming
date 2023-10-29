#include "main.h"
/**
 *sqrt_helper - finds the natural square root of a number
 * @n: the number to find the square root of
 *  * @i: the current divisor
 *   *
 *    * Return: the natural square root of n if it exists, otherwise -1
 */
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 *  * _sqrt_recursion - returns the natural square root of a number
 *   * @n: the number to find the square root of
 *    *
 *     * Return: the natural square root of n if it exists, otherwise -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
