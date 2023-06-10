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
	int num1, num2, result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);

	return (result);
}
