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
	char *b;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	b = malloc(sizeof(char) * (x + y + 1));
	if (b == NULL)
		return (NULL);
	x = y = 0;
	while (s1[x] != '\0')
	{
		b[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		b[x] = s2[y];
		x++, y++;
	}

	b[x] = '\0';
	return (b);
}
