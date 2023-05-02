#include "main.h"

/**
 * print_rev - A function that prints a string, in reverse,
 * followed by a new line.
 * @s: The string to be printed.
 *
 * Return: no return
 */
void print_rev(char *s)
{
	int x = 0;

	while (x >= 0)
	{
		if (s[x] == '\0')
			break;
		x++;
	}

	for (x--; x >= 0; x--)
		_putchar(s[x]);
	_putchar('\n');
}
