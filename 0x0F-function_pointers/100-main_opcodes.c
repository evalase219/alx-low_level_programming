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
	char *opc = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (x = 0; x < y; x++)
	{
		printf("%02x", opc[x] & 0xFF);
		if (x != y - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
 }
