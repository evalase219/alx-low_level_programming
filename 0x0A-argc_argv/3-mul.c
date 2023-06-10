#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - A program that multiplies two numbers.
 * @argc: arguments count
 * @argv: value of argument
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	int x, y, result = 1;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (x = 1; x < argc; x++)
	{
		y = strtol(argv[x], NULL, 10);
		result *= y;
		printf("%d\n", result);
	}
	return (result);
}
