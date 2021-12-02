#include "lists.h"

/**
 * *get_dnodeint_at_index - gets the nth element in dlistint_t list
 * @head: pointer to list element
 * @index: node at index
 * Return: nth element(success) otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (count < index)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);

		count++;
	}
	return (head);
}
