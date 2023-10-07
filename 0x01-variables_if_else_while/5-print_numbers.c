#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * The `main` function is the starting point of the program. It performs the
 * following tasks:
 * 1. Displays the numbers from 0 to 10, each on a separate line.
 * 2. Uses the `printf` function to print these numbers.
 *
 * Return:
 * The `main` function returns an integer value of 0 to indicate successful
 * execution of the program.
 */
int main(void)
{
	unsigned int num;

	for (num = 0; num <= 9; num++)
		printf("%d", num);
	printf("\n");
	return (0);
}
