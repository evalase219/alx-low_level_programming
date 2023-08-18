#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of dlistint_t list
 * @head: pointer to the head of the list
 * @n: value of node
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end_node = NULL, *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head)
	{
		end_node = *head;
		while (end_node->next != NULL)
			end_node = end_node->next;
		new_node->next = NULL;
		new_node->prev = end_node;
		end_node->next = new_node;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
