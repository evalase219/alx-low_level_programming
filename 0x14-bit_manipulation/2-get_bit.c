#include "main.h"

/**
 * get_bit - return the value of a bit at a given index
 * @n: number of value to return
 * @index: index of the bit
 * Return: return the value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = (n >> index) & 1;
	return (value);
}
