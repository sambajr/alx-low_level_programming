#include "main.h"
/**
 *reverse_array - Reverses the order of elements in an integer array.
 *
 *@a: The array of integers to be reversed.
 *@n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		 temp = a[i];
		 a[i] = a[j];
		 a[j] = temp;
	}
}

