#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of list_t list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		i++;
		temp = temp->next;
	}
	return (i);
}
