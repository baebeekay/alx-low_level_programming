#include "lists.h"

/**
 * listint_len - returns number of elements in listint_t list
 * @h: pointer variable to list
 * Return: lenght of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	unsigned int len = 0;

	temp = h;
	while (temp != NULL)
	{
		len++;
		temp = temp->next;
	}
	return (len);
}
