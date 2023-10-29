#include <stdio.h>
/**
 * main - prints all the aurgments passed to it
 * @argc: the size of the array of strings
 * @argv: the pointer to an array of strings
 * Return: Always (0) for {success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
