#include "main.h"

/**
 * _strlen_recursion - A function that returns the length of a string.
 * @s: A string to be measured.
 *
 * Return: return the length of the string.
 */
int _strlen_recursion(char *s)
{
	int lgth = 0;

	if (*s)
	{
		lgth++;
		lgth += _strlen_recursion(s + 1);
	}

	return (lgth);
}
