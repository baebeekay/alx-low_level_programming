#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint_end - adds new node at the end of listint_t
 * @head: poniter to beginning of list
 * @n: node to add
 * Return: new node(success) otherwise NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *append;

	append = *head;
	node = malloc(sizeof(listint_t));
	if (node == NULL)
	{
		free(node);
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (NULL);
	}
	while (append->next != NULL)
		append = append->next;
	append->next = node;
	return (node);
}
