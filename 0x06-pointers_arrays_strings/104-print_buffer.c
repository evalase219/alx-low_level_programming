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

	if (size <= 0)
		printf("\n");
	else
	{
		for (l = 0; l < size; l += 10)
		{
			printf("%.8x: ", l);
			for (m = l; m < l + 10; m++)
			{
				if (m % 2 == 0)
					printf(" ");
				if (m < size)
					printf("%.2x", *(b + m));
				else
					printf(" ");
			}
			printf(" ");
			for (n = l; n < l + 10; n++)
			{
				if (n >= size)
					break;
				if (*(b + n) < 32 || *(b + n) > 126)
					printf("%c", '.');
				else
					printf("%c", *(b + n));
			}
			printf("\n");
		}
	}
}
