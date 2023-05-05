#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer.
 * @b: Buffer to be printed.
 * @size: size of the buffer.
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int l, m, n;

	l = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (l < size)
	{
		m = size - l < 10 ? size - l : 10;
		printf("%08x: ", l);
		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + l + n));
			else
				printf(" ");
			if (n % 2)
			{
				printf(" ");
			}
		}
		printf(" ");
		for (n = 0; n < m; n++)
		{
			int c = *(b + l + n);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		l += 10;
	}
}
