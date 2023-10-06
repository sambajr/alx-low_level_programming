/*including stdio lib8*/
#include <stdio.h>
/* main function call */
int main(void)
{
	char letter;
	for (letter = 'a';letter <= 'z';letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
