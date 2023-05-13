#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints its name, followed by a new line.
 * @argc: counter argument for char
 * @argv: value of argument for char
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - argc]);
	return (0);
}
