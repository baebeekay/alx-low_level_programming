#include "lists.h"

/**
 * dlistint_len - gets thhe number of elements in list_t
 * @h: pointer to head node
 *
 * Return: number of the elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
