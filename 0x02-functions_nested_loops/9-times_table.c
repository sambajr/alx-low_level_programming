#include <stdio.h>
#include "main.h"
/**
* times_table - Prints the 9 times table, starting with 0.
*/
void times_table(void)
{
	int i, j, r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (j == 0)
				printf("%2d", r);
			else
				printf(", %2d", r);
		}
		printf("\n");
	}
}
