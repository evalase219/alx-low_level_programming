#include "main.h"

/**
 * rot13 - A function that encodes a string rot13.
 * @s: the string to be inputted.
 *
 * Return: returns the changed string s.
 */
char *rot13(char *s)
{
	int x, y;

	char *m = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; m[y] != '\0'; y++)
		{
			if (s[x] == m[y])
			{
				s[x] = n[y];
				break;
			}
		}
	}

	return (s);
}
