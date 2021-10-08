#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp = h;
	size_t num = 0;

	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d], %s\n", temp->len, temp->str);
		}
		temp = temp->next;
		num++;
	}
	return (num);
}
