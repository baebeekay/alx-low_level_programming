#include "lists.h"

/**
 * *reverse_listint - reverses a linked listint_t list
 * @head: pointer to first element
 * Return: pointer to first element in reversed list(success) otherwise NULL
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *nex;

	if (*head == NULL)
		return (NULL);
	while (*head)
	{
		nex = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = nex;
	}
	*head = temp;

	return (*head);
}
