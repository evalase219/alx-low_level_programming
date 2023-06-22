#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters to passed
 * @...: a variable of parameters to be calculated
 *
 * Return: if n == 0, return 0, otherwise return the sum of all parameter
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pm;
	unsigned int x;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(pm, n);

	for (x = 0; x < n; x++)
		sum += va_arg(pm, int);

	va_end(pm);
	return (sum);
}
