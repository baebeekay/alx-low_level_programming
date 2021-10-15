#include "main.h"

/**
 * get_bit - gets the bit of a number
 * @n: number to evaluate
 * @index: index num
 * Return: value of the bit at index(success) otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	a <<= index;
	if (a & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
