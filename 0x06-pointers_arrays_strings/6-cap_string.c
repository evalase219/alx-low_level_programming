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
	int x;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}

	for (x = 1; s[x] != '0'; x++)
	{
		if ((s[x] == ' '
		|| s[x] == '\t'
		|| s[x] == '\n'
		|| s[x] == ','
		|| s[x] == '.'
		|| s[x] == '!'
		|| s[x] == '?'
		|| s[x] == '"'
		|| s[x] == '('
		|| s[x] == ')'
		|| s[x] == '{'
		|| s[x] == '}') && (s[x + 1] >= 'a' && s[x + 1] <= 'z'))
		{
			s[x + 1] = s[x + 1] - 32;
		}
	}
	return (s);
}
