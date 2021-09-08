#include "main.h"

/**
 * *_strncpy - copies src to dest
 * @n: interger charcter
 * @dest: first character
 * @src: second character
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
	{
		dest[y] = src[y];
	}
	for (; y < n; y++)

		dest[y] = '\0';
	return (dest);
}
