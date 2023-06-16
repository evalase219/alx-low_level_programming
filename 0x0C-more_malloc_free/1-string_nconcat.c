#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2 to concatenates to s1.
 *
 * Return: return a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len = n, x;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	for (x = 0; s1[x]; x++)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	len = 0;

	for (x = 0; s1[x]; x++)
		str[len++] = s1[x];
	for (x = 0; s2[x] && x < n; x++)
		str[len++] = s2[x];

	str[len] = '\0';

	return (str);
}
