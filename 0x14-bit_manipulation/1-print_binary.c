#include "main.h"

/**
 * print_binary - print the representation  of a number
 * @n: number of binary to be printed
 */
void print_binary(unsigned long int n)
{
	int x, count = 0;
	unsigned long int equ;

	for (x = 63; x >= 0; x--)
	{
		equ = n >> x;
		if (equ & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
