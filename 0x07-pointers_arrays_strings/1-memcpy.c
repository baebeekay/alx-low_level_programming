#include "main.h"

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

	for (x = 0; x < n; x ++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
