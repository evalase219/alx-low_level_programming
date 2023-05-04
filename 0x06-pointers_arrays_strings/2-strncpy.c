#include "main.h"

/**
 * _strncpy - A function that copies a string.
 * @dest: Destination of the copied string.
 * @src: Source of the string.
 * @n: Number of bytes to be copied.
 * Return: return the pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;

	while (src[x++])
		y++;

	for (x = 0; src[x] && x < n; x++)
		dest[x] = src[x];

	for (x = y; x < n; x++)
		dest[x] = '\n';

	return (dest);
}
