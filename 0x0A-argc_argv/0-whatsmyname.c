#include <stdio.h>
/**
* main- prints the name of the program file
* @argc: the size of the array or counter
* @argv: the pointer to an array of strings
*
* Return: ALWAYS 0 (indicating success).
*/
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
