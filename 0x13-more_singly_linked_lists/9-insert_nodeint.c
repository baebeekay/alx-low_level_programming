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

	node->n = n;
	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		node->next = *head;
		return (node);
	}
	while (idx - 1 > 0)
	{
		temp = temp->next;
		idx--;
	}
	node->next = temp->next;
	temp->next = node;

	return (*head);
}
