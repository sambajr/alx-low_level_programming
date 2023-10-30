#include <stdlib.h>
#include <stdio.h>
/**
 *main - Program that takes first twointeger arguments and prints the product
 *   * @argc: Number of command line arguments
 *    * @argv: Array name
 *     * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{

	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	}
	return (0);
}
