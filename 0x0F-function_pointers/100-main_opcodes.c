#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of the argument
 * @argv: pointer to the argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int x, y;

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
		printf("%02X", opc[x] & 0XFF);
		if (x != y - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
