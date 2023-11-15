#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

void print_opcodes(int num_bytes);
/**
 *  * main - Entry point of the program
 *   * @argc: Number of arguments
 *    * @argv: Array of argument strings
 *     * Return: Exit status
 */
int main(int argc, char *argv[])
{
	int num_bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	print_opcodes(num_bytes);
	return (0);
}
/**
 *  * print_opcodes - Prints the opcodes of its own main function
 *   * @num_bytes: Number of bytes to print
 */
void print_opcodes(int num_bytes)
{
	char *opcodes;
	int i;

	opcodes = (char *)print_opcodes;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", (unsigned char)opcodes[i]);
	}
	printf("\n");
}
