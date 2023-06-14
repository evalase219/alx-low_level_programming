#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - A function that frees a two dimensional grid
 * @grid: The two dimensional grid to free.
 * @height: The height of the dimensional grid to free.
 *
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid != NULL || height != 0)
	{
		for (x = 0; x < height; x++)
		{
			free(grid[x]);
		}
		free(grid);
	}
}
