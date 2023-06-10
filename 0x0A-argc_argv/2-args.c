#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints all the arguments it receives.
 * @argc: arguments count.
 * @argv: value of argument to be printed.
 *
 * Return: nothing
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
