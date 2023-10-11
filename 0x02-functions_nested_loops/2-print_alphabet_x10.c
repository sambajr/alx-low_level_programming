#include "main.h"
/**
* print_alphabet_x10 - Prints the lowercase English alphabet 10 times
*/
void print_alphabet_x10(void)
{
	char n, letter;

	for (n = 0; n < 10; n++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
