#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * listint_len - return the number of elements in the lists
 * @h: pointer to the list of the elements
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
