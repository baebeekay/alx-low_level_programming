#include "lists.h"


/**
 * *insert_dnodeint_at_index - inserts node at given position
 * @h: pointer to first element
 * @idx: index position of node starts at 0
 * @n: list data
 * Return: new element (success) otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *head;
	dlistint_t *node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		temp = *h;
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
		head = *h;
		*h = node;
		node->prev = NULL;
	}
	else
	{
		node->prev = temp;
		head = temp->next;
		temp->next = node;
	}
	node->next = head;
	if (node->next != NULL)
		node->next->prev = node;

	return (node);
}
