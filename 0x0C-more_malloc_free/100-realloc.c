#include <stdlib.h>
#include "main.h"

/**
 * _realloc - function that allocates memory using free and malloc
 * @ptr: pointer to the memory previously allocated by malloc
 * @old_size: size of the allocated memory for ptr
 * @new_size: the new size of the memory block
 *
 * Return: return a pointer to the newly allocated block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt;
	unsigned int x, max = new_size;
	char *old_pt = ptr;

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
