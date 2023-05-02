#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * followed by new line.
 * @a: Array of integers.
 * @n: The number of elements of the array to be printed.
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);

		if (m == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
