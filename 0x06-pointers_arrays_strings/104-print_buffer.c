#include "main.h"
#include <stdio.h>

/**
 * print_buffer - A function that prints a buffer.
 * @b: buffer to be printed.
 *@size: size of the buffer.
 *
 * Return: Nothing
 */
void print_buffer(char *b, int size)
{
	int y, z;

	for (y = 0; y < size; y += 10)
	{
		printf("%08x: ", y);

		for (z = 0; z < 10; z++)
		{
			if ((z + y) >= size)
				printf(" ");
			else
				printf("%02x", *(b + z + y));
			if (z % 2 != 0 && y != 0)
			{		
				printf(" ");
			}
		}

		for (y = 0; y < 10; y++)
		{
			if ((z + y) >= size)
				break;

			else if (*(b + z + y) >= 31 && *(b + z + y) <= 126)
				printf("%c", *(b + z + y));

			else
				printf(".");
		}

		if (y >= size)
			continue;

		printf("\n");
	}

	if (size <= 0)
		printf("\n");
}

