#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index -  function that searches for an integer
 * @array: the array
 * @size: the size of the array
 * @cmp: function pointer
 * Return: the index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array == NULL && cmp == NULL)
	{
		return (-1);
	}
	if (cmp && array && size)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
