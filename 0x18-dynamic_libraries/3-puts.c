#include "main.h"

/**
 * _puts - A function that prints a string, followed by a new line to stdout.
 * @str: The string to be printed.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
