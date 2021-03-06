#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate the array according to the function
 * @array: the array to iterate
 * @size: the size of the array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
