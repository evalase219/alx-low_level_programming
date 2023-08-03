#include "main.h"

/**
 * _putchar - write the character c to stdout
 * @c: the character to write
 *
 * Return: on success 1, on error return -1 and errno is
 * set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
