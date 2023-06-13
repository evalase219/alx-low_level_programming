#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - function that returns a pointer to a two dimensional array
* @width: width of the array to input.
* @height: height of the array to input.
* Return: pointer to two dimensional array.
*/
int **alloc_grid(int width, int height)
{
	int **shape;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	shape = malloc(sizeof(int *) * height);
	if (shape == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
		shape[x] = malloc(sizeof(int) * width);
	if (shape[x] == NULL)
	{
		for (; x >= 0; x--)
			free(shape[x]);
		free(shape);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			shape[x][y] = 0;
	}
	return (shape);
}
