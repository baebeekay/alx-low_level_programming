#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * *add_node - adds node to the beginning of list_t
 * @head: first node
 * @str: pointer to list
 * Return: new node(success) otherwise null
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = _strlen(temp->str);
	temp->next = *head;
	*head = temp;

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
