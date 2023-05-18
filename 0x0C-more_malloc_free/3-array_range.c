#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers.
 * @min: minimum range of values stored.
 * @max: maximum range of values stored.
 *
 * Return: return a pointer to the newly created array,if min > max,
 * return NULL, if malloc fails, return NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int x, y;

	if (min > max)
		return (NULL);

	y = max - min + 1;

	p = malloc(sizeof(int) * y);

	if (p == NULL)
		return (NULL);

	for (x = 0; min <= max; x++)
		p[x] = min++;

	return (p);
}
