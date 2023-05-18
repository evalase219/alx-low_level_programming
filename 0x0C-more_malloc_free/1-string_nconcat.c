#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A function that concatenates two strings.
 * @s1: The first string to be concatenated.
 * @s2: The second string to be concatenated.
 * @n: The number of bytes from s2 to concatenate to s1.
 *
 * Return: return a pointer to the resulting string, if fails,
 * returns to NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0, y = 0, lgth1 = 0, lgth2 = 0;

	while (s1 && s1[lgth1])
		lgth1++;
	while (s2 && s2[lgth2])
		lgth2++;

	if (n < lgth2)
		s = malloc(sizeof(char) * (lgth1 + n + 1));
	else
		s = malloc(sizeof(char) * (lgth1 + lgth2 + 1));

	if (!s)
		return (NULL);

	while (x < lgth1)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < lgth2 && x < (lgth1 + n))
		s[x++] = s2[y++];

	while (n >= lgth2 && x < (lgth1 + lgth2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}
