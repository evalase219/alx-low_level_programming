#include "main.h"

/**
 * _strncat - A function that concatenates two strings,
 * using more number of bytes.
 * @dest: The string to be concatenated.
 * @src: The source to be attached.
 * @n: The number of bytes from src.
 *
 * Return: The pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

	return (dest);
}
