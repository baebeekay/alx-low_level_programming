#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - appends new node
 * @head: new node
 * @str: pointer to node
 * Return: new node(success) otherwise null
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *swap;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	swap = *head;
	while (swap->next)
		swap = swap->next;
	swap->next = temp;
	return (temp);
}
/**
 * _strlen - prints the lenght of a string
 * @s: input character
 * Return: -strlen
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

		return (count);
}
