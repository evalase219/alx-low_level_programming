#include "main.h"

/**
 * cap_string - A function that capitalizes all
 * words of a string.
 *@s: The string to be capitalised.
 *
 * Return: returns the changed string s.
 */
char *cap_string(char *s)
{
	int x = 0;

	while (s[x])
	{

		while (!(s[x] >= 'a' && s[x] <= 'z'))
		x++;

		if (s[x - 1] == ' '
		|| s[x - 1] == '\t'
		|| s[x - 1] == '\n'
		|| s[x - 1] == ','
		|| s[x - 1] == '.'
		|| s[x - 1] == '!'
		|| s[x - 1] == '?'
		|| s[x - 1] == '"'
		|| s[x - 1] == '('
		|| s[x - 1] == ')'
		|| s[x - 1] == '{'
		|| s[x - 1] == '}'
		|| x == 0)
			s[x] -= 32;

		x++;
	}

	return (s);
}
