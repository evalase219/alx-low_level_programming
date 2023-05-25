#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers followed by a new line.
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 * @...: a variable numbers to be printed.
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int y;

	va_start(pn, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(pn, int));
		if (separator && y < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(pn);
}
