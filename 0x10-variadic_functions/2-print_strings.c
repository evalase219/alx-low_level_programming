#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints string followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: a variable number of strings to be printed
 * Description: If separator is NULL, it is not printed.If one of the strings
 * if NULL, (nil) is printed instead
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

		if (str == NULL)
			printf("nil");
		else
			printf("%s", str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ps);
}
