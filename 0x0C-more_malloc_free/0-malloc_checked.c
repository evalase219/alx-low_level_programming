#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - A function that allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: return a pointer to the allocated memory, if malloc fails,
 * the status value will be 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
