#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints elements in a list
 * @head: pointer to elements
 * Return: num of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	unsigned int i = 0;

	if (head == NULL)
		exit(98);
	while (head != NULL)
	{
		i++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (head - (head->next) > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (i);
}
