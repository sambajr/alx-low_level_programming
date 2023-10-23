#include "main.h"
/**
 *print_chessboard - Print a chd represented as a 2D array of characters.
 *@a: The chessboard represented as a 2D array.
 *Description:
 *This function prints a chessboard represented a array of characters.
 *It uses the _putchar function to priracter and newline when necessary.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
			{
				_putchar('\n');
			}
		}
	}

}

