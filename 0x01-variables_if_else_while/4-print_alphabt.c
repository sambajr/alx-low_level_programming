#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints the alphabet in lowercase using the putchar function.
 * The putchar function is used only twice in this code.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (!(letter == 'q' || letter == 'e'))
		{
			putchar(letter);
		}
	/* Use putchar to print each letter */
	/* Use putchar to print a newline character */

	putchar('\n');

	return (0);
}
