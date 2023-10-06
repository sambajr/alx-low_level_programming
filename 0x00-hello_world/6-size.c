/* Include the standard input/output library*/
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{/*main function call*/
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int : %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(double));
	printf("Size of a float: %lu byte(s)", sizeof(float));
	fprintf(stderr, "[Anything]");

	return (0);
}

