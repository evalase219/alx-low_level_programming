#include "main.h"

/**
 * wildcmp - A function that compares two string and returns 1 if the string
 * can be considered identical, otherwise return 0.
 * @s1: first pointer of the string to be compared.
 * @s2: second pointer of the string to be compared.
 *
 * Return: returns 1 if the strings are identical, if not 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0' && *s2 == '*')
		{
			return (wildcmp(s1, s2 + 1));
		}

		return (*s2 == '\0');
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	return (0);
}
