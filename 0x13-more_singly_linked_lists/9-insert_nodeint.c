#include "lists.h"
#include <stdlib.h>

/**
 * *insert_nodeint_at_index - inserts node at given position
 * @head: pointer to first element
 * @idx: index position of node starts at 0
 * @n: list data
 * Return: new element (success) otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = *head;
	listint_t *node = malloc(sizeof(listint_t));
	unsigned int i;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && temp != NULL; i++)
		{
			temp = temp->next;
		}
		if (temp == NULL)
			return (NULL);
	}
	if (node == NULL)
		return (NULL);
	node->n = n;
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	node->next = temp->next;
	temp->next = node;

	return (node);
}
