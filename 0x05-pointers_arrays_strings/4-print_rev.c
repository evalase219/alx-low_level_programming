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
	int x = 0, y;

	while (s[y++])
		x++;

	for (y = x - 1; y >= 0; y--)
		_putchar(s[y]);

	_putchar('\n');
}
