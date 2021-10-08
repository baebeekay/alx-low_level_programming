#include "lists.h"
#include <stdlib.h>

/**
 * list_len - gets thhe number of elements in list_t
 * @h: pointer to list_t
 *
 * Return: lenght of the elements
 */
size_t list_len(const list_t *h)
	{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
