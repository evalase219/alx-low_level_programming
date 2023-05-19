#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * main - A program that multiplies two positive numbers.
 * @argc: number of argument
 * @argv: value of argument
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int x, y;
	unsigned long multi;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (argv[x][y] > 57 || argv[x][y] < 48)
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	multi = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", multi);
	return (0);
}
