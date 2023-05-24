#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - A function that prints a name.
 * @name: pointer to the name to print.
 * @f: pointer to a function.
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
