#include <stdlib.h>
#include "main.h"

char *_memset(char *s, char b, unsigned int n);

/**
 * _memset - function that fills memory with a constant byte
 * @s: the memory area to be filled
 * @b: the character to copy
 * @n: the number of times to copy b
 *
 * Return: return pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}

	return (s);
}

/**
 * _calloc - function that allocates memory for an array using malloc
 * @nmemb: the number of elements in the array.
 * @size: the size of each element
 *
 * Return: return a pointer to the allocated memory on success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
