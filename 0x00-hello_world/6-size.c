#include <stdio.h>
/* Include the standard input/output library*/
/* Print the size of char*/
int main(void)
/*main function call*/
{
	fprintf(stderr, "Size of a char: %zu byte(s)\n", sizeof(char));
	fprintf(stderr, "Size of an int : %zu byte(s)\n", sizeof(int));
	fprintf(stderr, "Size of a long int: %zu byte(s)\n", sizeof(long));
	fprintf(stderr, "Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	fprintf(stderr, "Size of a float: %zu byte(s)\n", sizeof(float));
/* Print the size of long long int*/
	return (0);
/* Return 0 to indicate successful execution End of the main functio*/
}
