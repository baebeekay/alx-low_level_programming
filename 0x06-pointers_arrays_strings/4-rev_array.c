#include "main.h"

/**
 * reverse_array - reverses the elements in an array
 *
 * @a: pointer character
 * @n: integer character
 */
void reverse_array(int *a, int n)
{
	int j, i, temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{

		temp = *(a + i);
		*(a + i) = *(a + j);
		*(a + j) = temp;
	}
}
