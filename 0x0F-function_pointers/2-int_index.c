#include "function_pointer.h"

/**
 * int_index - A function that searches for an integer.
 * @array: pointer to an array
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to be used to compare values
 *
 * Return: return the index of the first element for which the cmp function
 * does not return 0. if no element matches, return -1. if size <= 0,
 * return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
