#include "main.h"
#include <unistd.h>

/**
 * _putchar - write a character c to stdout.
 * @c: The character to be printed.
 *
 * Return: 1 on success
 * On error, return-1 and errno is appropriately set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
