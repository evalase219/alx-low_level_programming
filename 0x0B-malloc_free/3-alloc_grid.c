#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - Function that returns a pointer to 2 dimensional array
 * of integer
 * @width: The width of the array
 * @height: The height of the array
 *
 * Return: On success, return a pointer to 2 dimensional array,
 * on failure return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **shape;
	int m, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	shape = (int **) malloc(height * sizeof(int *));
	if (shape == NULL)
		return (NULL);

	for (m = 0; m < height; m++)
	{
		shape[m] = (int *) malloc(width * sizeof(int));
		if (shape[m] == NULL)
		{
			while (m > 0)
				free(shape[--m]);
			free(shape);
			return (NULL);
		}
		for (n = 0; n < width; n++)
			shape[m][n] = 0;
	}
	return (shape);
}
