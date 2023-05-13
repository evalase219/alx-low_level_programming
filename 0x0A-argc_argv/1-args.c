#include <stdio.h>
#include "main.h"

/**
 * main - A program that prints the number of arguments passed into it.
 * @argc: number of argument to pass in
 * @argv: value of argument to pass in
 *
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", (argc - 1));
	return (0);
}
