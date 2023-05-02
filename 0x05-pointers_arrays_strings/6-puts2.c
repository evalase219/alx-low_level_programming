#include "main.h"

/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 * @str: The string that contains the characters.
 * Return: Nothing
 */
void puts2(char *str)
{
	int m = 0, n = 0;

	while (str[m++])
		n++;

	for (m = 0; m < n; m += 2)
		_putchar(str[m]);

	_putchar('\n');
}
