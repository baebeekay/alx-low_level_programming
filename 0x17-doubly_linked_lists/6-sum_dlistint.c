#include "lists.h"

/**
 * sum_dlistint - sum of all data in dlistint_t list
 * @head: pointer to list
 * Return: sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node = head;
	int sum = 0;

	if (head == NULL)
		return (0);
	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
