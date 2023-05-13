#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - A program that prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: number of argument to be printed
 * @argv: value of argument to be printed
 *
 * Return: Always 0 (Success), 1 on (Error)
 */
int main(int argc, char *argv[])
{
	int digit, x, output;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	digit = atoi(argv[1]);
	output = 0;

	if (digit < 0)
	{
		printf("0\n");
		return (0);
	}

	for (x = 0; x < 5 && digit >= 0; x++)
	{
		while (digit >= coins[x])
		{
			output++;
			digit -= coins[x];
		}
	}

	printf("%d\n", output);
	return (0);
}
