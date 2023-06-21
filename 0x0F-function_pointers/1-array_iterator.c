#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array
 * @array: pointer to an array
 * @size: size of the element to be executed
 * @action: pointer to the function to be executed
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
