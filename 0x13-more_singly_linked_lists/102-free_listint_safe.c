#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - free a list with loops
 * @h: list pointer
 * Return: num of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	unsigned int i = 0;
	listint_t *temp;

	if (*h == NULL)
		return (0);
	temp = *h;
	while (*h)
	{
		i++;
		temp = *h;
		if (*h - ((*h)->next) > 0)
		{
			*h = temp->next;
			free(temp);
		}
		else
		{
			break;
		}
	}
	free(*h);
	*h = NULL;
	return (i);
}
