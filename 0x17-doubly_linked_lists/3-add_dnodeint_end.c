#include "lists.h"

/**
 * *add_dnodeint_end - a function that adds a new node
 *                    at the end of dlistint_t list.
 * @head: pointer to head node
 * @n: node data
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp, *cur;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}
	cur = *head;
	while (cur->next != NULL)
	{
		cur = cur->next;
	}
	cur->next = temp;
	temp->prev = cur;


	return (temp);
}
