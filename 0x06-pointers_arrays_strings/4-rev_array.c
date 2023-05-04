#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: A pointer to the array of integers to be reversed.
 * @n: The number of elements in the array to reverse.
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int x = 0, y = 0, z;

	for (x = 0, y = n - 1; x < y; x++, y--)
	{
		z = a[x];
		a[x] = a[y];
		a[y] = z;
	}
}
