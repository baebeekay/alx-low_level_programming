#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory with malloc
 * @nmemb: number of elements in an array
 * @size: size of bytes
 *
 * Return: p(sucess)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
		p[n] = 0;
	return (p);
}
