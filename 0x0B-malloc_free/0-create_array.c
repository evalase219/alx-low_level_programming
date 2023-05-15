#include "main.h"
#include <stdlib.h>

/**
 * create_array - A function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: The size of array to be created.
 * @c: The char to be initialized.
 *
 * Return: If size = 0, return NULL, if it is not return a pointer to
 * the array.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int x;

	s = malloc(sizeof(char) * size);
	if (size == 0 || s == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		s[x] = c;
	return (s);
}
