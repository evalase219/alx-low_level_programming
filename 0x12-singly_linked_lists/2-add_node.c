#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of the string
 * @s: pointer to the string
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node - add a new node at the beginning of the list
 * @head: head of the list
 * @str: value to insert into the element
 * Return: the number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
