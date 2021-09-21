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
	unsigned int len = (_strlen(str) + 1);
	char *p = malloc(len);

	if (str == NULL)
	{
		return (NULL);
	}
	_memcpy(p, str, len);

	return (p);
}

/**
 * _strlen - gets the lenght of a string
 * @c: string
 * Return: lenght of c
 */
int _strlen(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		i++;
		c++;
	}
	return (i);
}


/**
 * *_memcpy - copys the memory area
 * @dest: A pointer memory to be copied to
 * @src: The pointer memory to be copied from.
 * @n: The number of bytes to be filled.
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
