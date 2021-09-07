#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of an array
 * @a: pointer
 * @n: integer character
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		if (x != (n - 1))
		{
			printf("%d, ", a[x]);
		}
		else
		{
			printf("%d", a[x]);
		}
	}
	printf("\n");
}
