#include <stdio.h>
#include "lists.h"

/**
 * list_len -A function that returns the number of element.
 * @h: pointer to the name of the list.
 *
 * Return: the number of nodes.
 */
size_t list_len(const list_t *h)
{
	int x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
