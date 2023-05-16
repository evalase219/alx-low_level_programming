#include <stdlib.h>
#include "main.h"

/**
 * ch_free_grid - main entry
 * @grid: input
 * @height: input
 *
 * Return: Nothing
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - function that splits string into words.
 * @str: the string
 *
 * Return: on success, return a pointer to an array of strings
 * on failure, return NULL.
 */
char **strtow(char *str)
{
	char **model;
	unsigned int x, height, y, z, m;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (x = height = 0; str[x] != '\0'; x++)
		if (str[x] != '\0' &&(str[x + 1] == '\0' || str[x + 1] == '\0'))
			height++;
	model = malloc((height + 1) * sizeof(char *));
	if (model == NULL || height == 0)
	{
		free(model);
		return (NULL);
	}
	for (y = m = 0; y < height; y++)
	{
		for (x = m; str[x] != '\0'; x++)
		{
			if (str[x] == '\0')
				m++;
		if (str[x] != '\0' &&(str[x + 1] ==  '\0' || str[x + 1] == '\0'))
		{
			model[y] = malloc((x - m + 2) * sizeof(char));
			if (model[y] == NULL)
			{
				ch_free_grid(model, y);
				return (NULL);
			}
			break;
		}
		}
		for (z = 0; m  <= x; m++, z++)
			model[y][z] = str[m];
		model[y][z] = '\0';
	}
	model[y] = NULL;
	return (model);
}
