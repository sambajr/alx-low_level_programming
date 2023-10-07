#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description:
 * The `main` function is the starting point of the program. It performs the
 * following tasks:
 * 1. Iterates through all possible combinations of two two-digit numbers in
 *    ascending order.
 * 2. Ensures that each number is printed with two digits (e.g., '01' instead
 *    of '1').
 * 3. Separates each combination of numbers by a comma followed by a space.
 * 4. Prints a newline character to separate the output.
 *
 * Return:
 * The `main` function returns an integer value of 0 to indicate successful
 * execution of the program.
 */
int main(void)
{
	int num1, num2;

	/* Iterate through all possible combinations of two two-digit numbers */
	for (num1 = 0; num1 <= 99; num1++)
{
	for (num2 = num1; num2 <= 99; num2++)
	{
		putchar((num1 / 10) + '0');
		/* Print the second digit of num1 */
		putchar((num1 % 10) + '0');
		/* Print a space separator */
		putchar(' ');
		/* Print the first digit of num2 */
		putchar((num2 / 10) + '0');
		/* Print the second digit of num2 */
		putchar((num2 % 10) + '0');
/* Check if it's not the last combination */
		if (!(num1 == 99 && num2 == 99))
		{
			/* Print the comma separator */
			putchar(',');
			/* Print a space separator */
			putchar(' ');
		}
	}
	}
/* Print a newline character to separate the output */
	putchar('\n');
	return (0);
}

