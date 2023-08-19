#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node at index index of a list
 * @head: head of the list
 * @index: the index of the node that should be deleted
 * Return: return 1 if succeed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *list = *head;
	unsigned int count;

	if (!head || !list)
		return (-1);
	if (index == 0)
	{
		list = list->next;
		free(*head);
		*head = list;
		if (*head)
			(*head)->prev = NULL;
		return (1);
	}
	for (count = 0; list; count++)
	{
		if (count == index)
		{
			if (list->next)
			{
				(list->prev)->next = list->next;
				(list->next)->prev = list->prev;
				free(list);
				return (1);
			}
			else
			{
				(list->prev)->next = NULL;
				free(list);
				return (1);
			}
		}
		list = list->next;
	}
	return (-1);
}
