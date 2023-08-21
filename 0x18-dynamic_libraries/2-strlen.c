#include "main.h"

/**
 * _strlen - A function that returns the length of a string.
 * @s: The length of the string to get.
 *
 * Return: The length of the string @s.
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++)
		y++;

	return (y);
}
