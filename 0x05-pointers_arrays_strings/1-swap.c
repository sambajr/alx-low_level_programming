#include "main.h"
/**
 *swap_int - Swaps the values of two integers.
 *@a: Pointer to the first integer.
 *@b: Pointer to the second integer.
 *
 *Return: No return value (void).
 */
void swap_int(int *a, int *b)
{
	int con = *a;
	*a = *b;
	*b = con;
}
