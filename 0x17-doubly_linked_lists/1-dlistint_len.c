#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked dlistint_t list
 * @h: head of the list
 * Return: number of the elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
