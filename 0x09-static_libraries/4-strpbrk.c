#include "main.h"

/**
 * _strpbrk - A function that locates the first occurrence in the string
 * s of any of the bytes in the string accept.
 * @s: The string to be located.
 * @accept: The set of the bytes to be located.
 *
 * Return: if a byte is matched - a pointer to the matched byte.
 * if no such byte - NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
