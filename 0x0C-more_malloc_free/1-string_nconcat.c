#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of bytes from s2 to concatenate to s1
 *
 * Return: return a pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n >= len2)
		x = len1 + len2;
	else
		x = len1 + n;
	str = malloc(sizeof(char) * (x + 1));
	if (str == NULL)
		return (NULL);

	len2 = 0;
	while (y < x)
	{
		if (y <= len1)
			str[y] = s1[y];
		if (y >= len1)
		{
			str[y] = s2[len2];
			len2++;
		}
		y++;
	}
	str[y] = '\0';
	return (str);
}
