#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list
 * @head: first node in list
 */
void free_list(list_t *head)
{
	list_t *node, *next;

	node = head;
	while (node != NULL)
	{
		next = node->next;
		free(node->str);
		free(node);
		node = next;
	}

}
