#include "main.h"

int actual_sqrt_recursion(int n, int i);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - A function that returns the
 * natural square root of a number.
 * @n: number of the square root to be calculated.
 *
 * Return: return the result of the square root.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (actual_sqrt_recursion(n, i));
}

/**
 * actual_sqrt_recursion - A function that recurses to find
 * the natural square root of a number.
 * @n: Number of the square root to be calculated.
 * @i: iterator
 *
 * Return: return the result of the square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}
