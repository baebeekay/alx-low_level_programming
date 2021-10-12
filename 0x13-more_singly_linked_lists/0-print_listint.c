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
	const listint_t *temp;
	unsigned int num = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%u\n", temp->n);
		temp = temp->next;

		num++;
	}
	return (num);
}
