#include "main.h"
#include <stdlib.h>

/**
 * argstostr - A function that concatenates all the arguments of your program.
 * @ac: int to input.
 * @av: double pointer of array to input.
 *
 * Return: on success, return a pointer to a new string,
 * on failure return NULL.
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, lgth = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			lgth++;
	}
	lgth += ac;

	s = malloc(sizeof(char) * lgth + 1);
	if (s == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
		{
			s[z] = av[x][y];
			z++;
		}
		if (s[z] == '\0')
		{
			s[z++] = '\n';
		}
	}
	return (s);
}
