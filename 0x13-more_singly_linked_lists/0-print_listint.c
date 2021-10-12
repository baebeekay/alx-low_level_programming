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
	int num = 0, i = 0;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
