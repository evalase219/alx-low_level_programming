#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that write character to stdout.
 * @c: character to write.
 *
 * Return: On success return 1,
 * On error, return -1 and erron is appropriately set.
 */
int _putchar(char *c)
{
	return (write (1, &c, 1));
}
