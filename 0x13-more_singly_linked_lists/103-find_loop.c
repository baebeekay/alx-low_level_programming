#include "lists.h"

/**
 * *find_listint_loop - finds loop in list
 * @head: list pointer
 * Return: address of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *loop = head, *node;

	if (head == NULL)
		return (NULL);
	if (head == head->next)
		return (head);
	while (loop)
	{
		loop = loop->next;
		node = head;
		while (loop && node != loop)
		{
			if (node == loop->next)
				return (node);
			node = node->next;
		}
	}
	return (loop);
}
