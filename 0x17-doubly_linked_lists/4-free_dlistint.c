#include "lists.h"
/**
 * free_dlistint - free a dlistint_t list
 * @head: pointer to the head
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *list = head;

	while (head)
	{
		list = head;
		head = list->next;
		free(list);
	}
}
