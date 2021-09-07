#include "main.h"

/**
 * *_strcpy - copy src to dest
 *
 * @dest: first character
 * @src: second charcter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}
