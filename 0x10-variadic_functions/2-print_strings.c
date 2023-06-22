#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints string followed by a newline
 * @separator: string to be printed
 * @n: number of strings
 * @...: a variable number of string
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int x;
	char *str;

	va_start(ps, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(ps, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (x < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(ps);
}
