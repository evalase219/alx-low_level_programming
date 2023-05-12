#include "main.h"

/**
 * _strncpy - A function that copies a string
 * @dest: Destination of the copied string
 * @src: Source of the string
 * @n: Number of bytes to be copied
 * Return: return the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[x] = src[x];
	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
