#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all arguments it receives.
 * @argc: number of argument to be printed
 * @argv: value of argument to be printed
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
