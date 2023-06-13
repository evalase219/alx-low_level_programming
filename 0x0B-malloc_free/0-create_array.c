#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of the array to be created.
 * @c: pointer to the character to be created.
 *
 * Return: return NULL if the size is zero, return a pointer to the array,
 * or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	b = malloc(size * sizeof(char));
	if (size == 0 || b == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		b[a] = c;
	return (b);
}
