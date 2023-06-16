#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: the number of bytes to be allocated
 *
 * Return: return a pointer to the allocated memory, if malloc fails
 * exit with 98.
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int) * b);
	if (p == NULL)
		exit(98);
	return (p);
}
