#include "main.h"
#include <stdlib.h>

int _strlen(char *c);
char *_memcpy(char *dest, char *src, unsigned int n);
/**
 * *_strdup - duplicates string
 * @str:pointer to a string
 *
 * Return: pointer to p
 */
char *_strdup(char *str)
{
	unsigned int i, j, len = 0;
	char *p;

	if (str == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j] != '\0'; j++)
	{
		len++;
	}
	len++;
	p = malloc(len * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		p[i] = str[i];
	}
	return (p);

}
