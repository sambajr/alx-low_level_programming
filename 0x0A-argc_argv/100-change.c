#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the minimum number of coins to make change for an amount.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 for success, 1 for errors.
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
	}
	else
	{
		int coins = 0;

		coins += cents / 25;
		cents %= 25;
		coins += cents / 10;
		cents %= 10;
		coins += cents / 5;
		cents %= 5;
		coins += cents / 2;
		cents %= 2;
		coins += cents;

		printf("%d\n", coins);
	}
	return (0);
}

