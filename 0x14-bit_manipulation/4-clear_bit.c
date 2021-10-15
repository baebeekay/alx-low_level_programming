#include "main.h"
#include <stddef.h>

/**
 * clear_bit -  sets the value of a bit to 0 at a given index.
 * @n: pointer
 * @index: index position
 * Return: 1 (success) otherwise -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 0x01;

	if (n == NULL)
		return (-1);
	if (index > 64)
		return (-1);
	num <<= index;
	*n = *n & ~num;
	return (1);
}
