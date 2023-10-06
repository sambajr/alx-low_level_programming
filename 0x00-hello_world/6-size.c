/* Include the standard input/output library*/
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{/*main function call*/
	fprintf(stderr, "Size of a char: %zu byte(s)\n", sizeof(char));
	fprintf(stderr, "Size of an int : %zu byte(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %zu byte(s)\n", sizeof(long));
	fprintf(stderr, "Size of a long long int: %zu byte(s)\n", sizeof(double));
	fprintf(stderr, "Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}

