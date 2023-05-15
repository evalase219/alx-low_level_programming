#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - A function that returns a pointer to a newly allocated space
 * in memory which contains a copy of string given.
 * @str: char to be inputed
 *
 * Return: if str = NULL, return NULL, but on success, return a pointer
 * to the duplicate string.
 */
char *_strdup(char *str)
{
	char *ns;
	unsigned int lgth, x;

	if (str == NULL)
	{
		return (NULL);
	}

	lgth = 0;
	while (str[lgth] != '\0')
	{
		lgth++;
	}

	ns = malloc(sizeof(char) * (lgth + 1));

	if (ns == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < lgth; x++)
	{
		ns[x] = str[x];
	}
	ns[lgth] = '\0';
	return (ns);
}
