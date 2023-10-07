#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description:
 * The `main` function is the starting point of the program. It performs the
 * following tasks:
 * 1. Prints the hexadecimal numbers in lowercase from '0' to '9','a' to 'f'.
 * 2. Uses the `putchar` function to print each digit and letter.
 * 3. Prints a newline character to separate the output.
 *
 * Return:
 * The `main` function returns an integer value of 0 to indicate successful
 * execution of the program.
 */
int main(void)
{
	char base;

	for (base = '0'; base <= '9'; base++)
	{
		putchar(base);
	}
	for (base = 'a'; base <= 'h'; base++)
	{
		putchar(base);
	}
	putchar('\n');
	return (0);
}
