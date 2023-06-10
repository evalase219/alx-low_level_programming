#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name.
 * @argc: count of the argument.
 * @argv: pointer to the value of argument.
 *
 * Return: nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
