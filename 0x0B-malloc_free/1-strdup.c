#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly allocated space
 * in memory.
 * @str: the string to be duplicated.
 *
 * Return: return NULL if there is insufficient memory on success
 * return the duplicated string.
 */
char *_strdup(char *str)
{
	char *newstr;
	unsigned int len, x;

	if (str == NULL)
	{
		return (NULL);
	}
	len = 0;
	while ((str[len]) != '\0')
	{
		len++;
	}

	newstr = malloc(sizeof(char) * (len + 1));
	if (newstr == NULL)
	{
		return (NULL);
	}
	for (x  = 0; x < len; x++)
	{
		newstr[x] = str[x];
	}
	newstr[x] = '\0';
	return (newstr);
}
