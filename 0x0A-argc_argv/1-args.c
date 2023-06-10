#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints number of arguments that passed through it.
 * @argc: arguments count
 * @argv: value of arguments to be printed.
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
