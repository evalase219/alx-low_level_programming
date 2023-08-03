#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: string containing 0 and 1
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int pla_val;
	unsigned int dec_val = 0;

	if (!b)
		return (0);
	for (pla_val = 0; b[pla_val]; pla_val++)
	{
		if (b[pla_val] < '0' || b[pla_val] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[pla_val] - '0');
	}
	return (dec_val);
}
