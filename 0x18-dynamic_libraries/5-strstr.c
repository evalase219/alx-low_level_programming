#include "main.h"

/**
 * _strstr - A function that locates a substring.
 * @haystack: The string to be located.
 * @needle: The substring to be located.
 *
 * Return: if the substring is found - a pointer to the beginning of the
 * located substring.if not found - NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;

		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return (haystack);
	}
	return (0);
}
