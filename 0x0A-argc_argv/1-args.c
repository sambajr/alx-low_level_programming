#include <stdio.h>
/**
 * main - prints the number of cli agurment passed
 * @argc: size of aragument
 * @argv: pointer to the array of strings
 * Return: Always (0) for {success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
