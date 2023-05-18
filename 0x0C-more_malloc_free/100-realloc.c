#include <stdlib.h>
#include "main.h"

/**
 * _realloc - A function that reallocates a memory using malloc and free.
 * @ptr: pointer to the memory previously allocated by malloc.
 * @old_size: size of the allocated memory for ptr.
 * @new_size: The size of the memory block.
 *
 * Return: return the pointer to the newly block, if the new_size = 0,
 * and ptr is not NULL, return NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	char *old_pt = ptr;
	unsigned int x, max = new_size;

	if (ptr == NULL)
	{
		pt = malloc(new_size);
		return (pt);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	pt = malloc(new_size);
	if (pt == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (x = 0; x < max; x++)
		pt[x] = old_pt[x];
	free(ptr);
	return (pt);
}
