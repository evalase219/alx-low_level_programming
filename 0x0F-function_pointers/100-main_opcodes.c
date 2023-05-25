#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that prints the opcodes of its own main function.
 * @argc: number of the arguments in the program
 * @argv: pointer to the argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int x, y;
	char *op;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op = (char *)main;

	for (y = 0; y < x; y++)
	{
		if (y == x - 1)
		{
			printf("%02hhx\n", op[y]);
			break;
		}
		printf("%02hhx", op[y]);
	}
	return (0);
}
