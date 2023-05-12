#include "main.h"

/**
 * _strspn - A function that gets the length of a prefix substring.
 * @s: pointer to the string to get.
 * @accept:prefix to be measured.
 *
 * Return: The number of bytes in @s which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				x++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (x);
		}
		s++;
	}
	return (x);
}
