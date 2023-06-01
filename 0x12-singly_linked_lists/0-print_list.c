#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - A function that prints all the elements of a list_t list.
 * @h: pointer to the list of element to be printed.
 *
 * Return: return the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		i++;
		h = h->next;
	}
	return (i);
}
