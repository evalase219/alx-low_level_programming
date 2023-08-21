#include "main.h"
#include <unistd.h>

/**
 * _putchar - Write the char c to stdout
 * @c: The char to be printed.
 *
 * Return: 1 on Success
 * On error, return -1 and errno is appropriately set.
 */
int _putchar(char c)
{
	return (write (1, &c, 1));
}
