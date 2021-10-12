#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of listint_t
 * @head: pointer to head node
 * Return: head nodes data(success) otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	unsigned int data;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	data = temp->n;
	free(temp);
	return (data);
}
