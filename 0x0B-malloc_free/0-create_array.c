#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of char and initializes with a char
 * @size: size of array
 * @c: character array
 * Return: s(Success) otherwise NULL
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(sizeof(char) * size);
		if (size == 0)
		{
			return (NULL);
		}
		if (s == NULL)
		{
			return (NULL);
		}
		i = 0;
		while (i < size)
		{
			s[i] = c;
			i++;
		}
		s[i] = '\0';
		return (s);
}
