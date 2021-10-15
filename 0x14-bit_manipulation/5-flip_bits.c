#include "main.h"

/**
 * flip_bits - gets the number of bits you would need to flip to get
 *              from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	unsigned int flip = 0;

	while (num)
	{
		flip = flip + (num & 1);
		num = num >> 1;
	}
	return (flip);
}
