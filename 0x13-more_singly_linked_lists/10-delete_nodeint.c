#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes node at index in listint_t list
 * @head: pointer to list elements
 * @index: position of node
 * Return: 1(Success) otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *node;
	unsigned int i;


	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	node = temp->next->next;
	free(temp->next);
	temp->next = node;

	return (1);
}
