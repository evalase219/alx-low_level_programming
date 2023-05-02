#include "main.h"

/**
 * puts_half - A function that prints half of a string,
 * followed by a new line.
 * @str: String to be printed.
 * Return: Nothing
 */
void puts_half(char *str)
{
	int x = 0, y = 0, z;

	while (str[x++])
		y++;

	if ((y % 2) == 0)
		z = y / 2;

	else
		z = (y + 1) / 2;

	for (x = z; x < y; x++)
		_putchar(str[x]);

	_putchar('\n');
}
