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
	unsigned int del_val = 0;

	if (!b)
		return (0);
	for (pla_val = 0; b[pla_val]; pla_val++)
	{
		if (b[pla_val] < '0' || b[pla_val] > '1')
			return (0);
		del_val = 2 * del_val + (b[pla_val] - '0');
	}
	return (del_val);
}
