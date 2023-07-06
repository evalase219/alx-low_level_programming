#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index where the new node is added
 * @n: data to be added
 *
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new;
	listint_t *tmp = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; tmp && count < idx; count++)
	{
		if (count == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;
	}
	return (NULL);
}
