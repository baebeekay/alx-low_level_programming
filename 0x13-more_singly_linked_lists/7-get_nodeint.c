#include "lists.h"
#include <stdlib.h>

/**
 * *get_nodeint_at_index - gets the nth element in listint_t list
 * @head: pointer to list element
 * @index: node at index
 * Return: nth element(success) otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
