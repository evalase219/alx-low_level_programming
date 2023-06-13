#include <stdlib.h>
#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: first string to be concatenated.
 * @s2: second string to be concatenated.
 *
 * Return: return content of s1 and s2 on success, on failure return NULL.
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int x = 0, y = 0;
	char *a, *b;

	a = s1;
	if (s1)
		while (*a++)
			x++;
	else
		s1 = " ";
	a = s2;
	if (s1)
		while (*a++)
			y++;
	else
		s2 = " ";

	b = malloc(x + y + 1);
	if (!b)
		return (NULL);
	a = b;
	while (*s1)
		*a++ = *s1++;
	while (*s2)
		*a++ = *s2++;
	*a = 0;

	return (b);
}
