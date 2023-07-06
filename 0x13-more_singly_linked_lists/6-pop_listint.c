#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete the head node of a node
 * @head: pointer to the first node of the list
 *
 * Return: the head of node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int count;

	if (!head || !*head)
		return (0);

	count = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;
	return (count);
}
