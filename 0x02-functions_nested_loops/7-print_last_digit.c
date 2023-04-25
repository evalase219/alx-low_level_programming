#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @x: The last digit to be printed
 *
 * Return: The value of the last digit
 */
int print_last_digit(int x)
{
	int last digit = x % 10;

	if (last digit < 0)
		last digit *= -1;

	_putchar(last digit + '0');

	return (0);
}
