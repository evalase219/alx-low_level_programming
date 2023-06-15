#include <stdlib.h>
#include "main.h"

/**
 * argstostr - function that concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: On success, return a pointer to a new string, on failure return NULL
 */
char *argstostr(int ac, char **av)
{
	int x, y, z = 0, len = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
	}
	s = (char *) malloc(sizeof(char) * (len + 1 + ac));
	if (s == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
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
