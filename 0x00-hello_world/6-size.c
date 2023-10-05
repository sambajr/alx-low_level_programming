#include <stdio.h>
/* Include the standard input/output library*/
/* Print the size of char*/
/* Print the size of int*/
int main(void)/*main function call*/
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int : %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(float));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)", sizeof(float));
	return (0);
}
