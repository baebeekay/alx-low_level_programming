#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements in listint_t
 * @h: character to list
 *
 * Return: nuum of node
 */
size_t print_listint(const listint_t *h)
{
	unsigned int num = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
	        h = h->next;

		num++;
	}
	return (num);
}
