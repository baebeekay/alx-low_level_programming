#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: first node in list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node, *next;

	node = head;
	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}

}
