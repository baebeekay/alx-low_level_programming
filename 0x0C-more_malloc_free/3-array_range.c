#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lesser number
 * @max: upper number
 *
 * Return: pointer to new array(success) otherwise NULL
 */

int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	p = malloc(j * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
	{
		p[i] = min;
	}
	return (p);
}
