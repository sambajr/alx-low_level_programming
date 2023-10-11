#include <limits.h>
#include "main.h"
#include <stdio.h>
/**
* main - Entry point to check the _abs function.
*
* This program tests the _abs function by computing the absolute value of
* different integers and printing the results to the standard output.
*
* Return: Always returns 0 (SUCCESS).
*/
int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	r = _abs(INT_MAX);
	printf("%d\n", r);
	r = _abs(12);
	printf("%d\n", r);
	r = _abs(0x0F02);
	printf("%d\n", r);
	return (0);
}
