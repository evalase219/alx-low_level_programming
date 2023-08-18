#include "lists.h"
/**
 * sum_dlistint - return the sum of all the data(n) of the list
 * @head: pointer to the head of the list
 * Return: the addition of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
