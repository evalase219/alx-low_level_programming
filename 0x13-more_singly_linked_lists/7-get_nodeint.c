#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - return the nth node of a list
 * @head: pointer to the first node of the list
 * @index: the count of the node
 *
 * Return: return the number of the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tmp = head;

	while (tmp && num < index)
	{
		tmp = tmp->next;
		num++;
	}
	return (tmp ? tmp : NULL);
}
