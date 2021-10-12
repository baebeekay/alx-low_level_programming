#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum of all data in listint_t list
 * @head: pointer to list
 * Return: sum of all data
 */
int sum_listint(listint_t *head)
{
	listint_t *node = head;
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
