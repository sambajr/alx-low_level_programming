#include <stdio.h>
/* Include the standard input/output library*/
/* Print the size of char*/
/* Print the size of int*/
int main()
{
	printf("Size of a char: %zu byte\n", sizeof(char));
	printf("Size of an int : %zu byte\n", sizeof(int));
	printf("Size of a long int: %zu bytes\n", sizeof(float));
	printf("Size of a long long int: %zu bytes\n", sizeof(long long int));
       	printf("Size of a float: %zu bytes\n", sizeof(float));
       	return (0);
}
