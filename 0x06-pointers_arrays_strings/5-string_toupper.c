#include "main.h"

/**
 * string_toupper - A function that changes all lowercase
 * letters of a string to uppercase.
 * @s: The string to be inputted.
 *
 * Return: return the modified string s.
 */
char *string_toupper(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] >= 'a' && s[x] <= 'z')
		{
			s[x] = s[x] - 32;
		}
	}
	return (s);
}
