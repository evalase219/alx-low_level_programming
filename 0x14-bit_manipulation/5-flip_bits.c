#include "main.h"

/**
 *  flip_bits - return the number of bits you would need to flip
 *  @n: first number to be flipped
 *  @m: second number to be flipped
 *
 *  Return: number of bits changed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current = exclusive >> x;
		if (current & 1)
			count++;
	}
	return (count);
}
