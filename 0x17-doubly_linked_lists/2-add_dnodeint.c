#include "lists.h"

/**
 * *add_dnodeint - adds a new node at the beginning of dlistint_t list.
 * @head: - double pointer to head node
 * @n: integer data of list
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->prev = NULL;
	temp->n = n;
	temp->next = NULL;
	temp->next = *head;
	/*head->prev = temp;*/
	*head = temp;
	if (temp->next != NULL)
		(temp->next)->prev = temp;

	return (temp);
}
