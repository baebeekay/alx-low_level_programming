#include "main.h"

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
