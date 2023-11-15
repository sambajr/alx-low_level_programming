#include <stdio.h>

/**
 *  * main - Entry point of the program
 *   *
 *    * Return: Always 0 (success)
 */
int main(void)
{
	int i, sum, limit;

	limit = 1024;
	sum = 0;
	for (i = 0; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("Sum of multiples of 3 or 5 below %d: %d\n", limit, sum);
	return 0;
}

