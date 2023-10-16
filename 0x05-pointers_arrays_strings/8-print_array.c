#include <stdio.h>
#include "main.h"
/**
 *  * print_array - Prints n elements of an aowed by a new line.
 *   * @a: An array of integers.
 *    * @n: The number of elements to be printed.
 *
 *Ths function iterates over the t n elements of the array. For each element,
 *it prints the element using printf. If current element is not the last one
 *to be printed, it also prints a comnd a space to separate the elements.
 *After all elements have beeinted, it prints a newline character.
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
