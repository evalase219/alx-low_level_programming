
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer
  *to a 2 dimensional array of integers.
 * @width: The width of the array to input.
 * @height: The height of the array to input.
 *
 * Return: on success, return a pointer to
 * 2 dimensional array, on failure return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **shape;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	shape = malloc(height * sizeof(int *));
	if (shape == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		shape[m] = malloc(width * sizeof(int));
		if (shape[m] == NULL)
		{
			while (m >= 0)
				free(shape[m--]);
			free(shape);
			return (NULL);
		}

		for (n = 0; n < width; n++)
			shape[m][n] = 0;
	}

	return (shape);
}
