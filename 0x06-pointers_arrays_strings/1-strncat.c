#include "main.h"

int _strlen(char *s);
/**
 * *_strncat - concatenates two strings
 * @n: integer caracter
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x, dest_len = _strlen(dest);

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[dest_len + x] = src[x];
	}
	dest[dest_len + x] = '\0';

	return (dest);

}
/**
 * _strlen - prints the len of a string
 * @s: string character
 * caliing the function for len of a string
 * Return: len value
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
