#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line to stdout.
 * @s: The string to be printed
 */
void _puts(char *s)
{
	while (*s)
		_putchar(*s);

	_putchar('\n');
}
