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
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = num1 + 1; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 != 8 || num2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
