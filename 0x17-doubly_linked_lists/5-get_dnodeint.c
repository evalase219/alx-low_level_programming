#include "lists.h"
/**
 * get_dnodeint_at_index - return the nth node of the dlistint_t list
 * @head: pointer to the head
 * @index: the index of the node
 * Return: the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *list = head;
	int new_node = 0;

	while (new_node++ != (int)index && list)
		list = list->next;
	if (!list)
		return (NULL);
	return (list);
}
