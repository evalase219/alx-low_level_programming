#include "main.h"

/**
 * factorial - A function that returns the factorial of a given number.
 * @n: A given number to return the factorial from.
 *
 * Return: if n > 0 - return the factorial of n.
 * if n < 0 - 1 to indicate error.
 */
int factorial(int n)
{
	int output = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	output *= factorial(n - 1);

	return (output);
}
