#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 * @s: The string to be printed.
 *
 * Return: No return
 */
void print_rev(char *s)
{
	int x = 0;

	while (*s)
	{
		s++;
		x++;
	}

	while (x)
	{
		s--;
		_putchar(*s);
		x++;
	}

	_putchar('\n');
}

