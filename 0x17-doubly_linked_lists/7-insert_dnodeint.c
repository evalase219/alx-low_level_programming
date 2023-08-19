#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at a given position
 * @h: head of the list
 * @idx: the index of the list where the new node will be added
 * @n: value of the list
 * Return: address of the new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *list = *h;
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (!h || !new_node)
		return (NULL);
	new_node->n = n;
	if (!(*h))
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	for (; list; count++)
	{
		if (count == idx)
		{
			new_node->prev = list->prev;
			(list->prev)->next = new_node;
			new_node->next = list;
			return (new_node);
		}
		else if (!list->next && 1 + count == idx)
			return (add_dnodeint_end(h, n));
		list = list->next;
	}
	return (NULL);
}
