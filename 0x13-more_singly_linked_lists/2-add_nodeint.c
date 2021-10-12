#include "lists.h"
#include <stdlib.h>

/**
 * *add_nodeint - add new node to listint_t
 * @head: pointer to add new
 * @n: node to add
 * Return: new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
