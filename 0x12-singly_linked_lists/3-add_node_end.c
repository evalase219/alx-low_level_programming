#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - finds the length of a string.
 * @str: string to find the length.
 *
 * Return: return the length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int x;

	for (x = 0; str[x]; x++)
		;
	return (x);
}

/**
 * add_node_end- add a new node to the end of the list
 * @head: double pointer to the list
 * @str: string to add to the new node.
 *
 * Return: return pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *temp;

	if (str == NULL)
		return (NULL);
	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->len = _strlen(node->str);
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = node;
	return (node);
}
