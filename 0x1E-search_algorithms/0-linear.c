#include "search_algos.h"

/**
 * linear_search -search for a value on an array of integer
 * @array: pointer to the first element of the array to search in
 * @size: number of the elements in array
 * @value: value to search for
 * Return: return -1,if the array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	for (; i < (int)size; i++)
	{
		printf("value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
