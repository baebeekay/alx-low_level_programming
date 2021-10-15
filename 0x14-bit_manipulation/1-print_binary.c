#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int b;

	if (n == 0)
	{
		_putchar('0');
	}
	for (i = ((sizeof(unsigned long int) * 8) - 1); i >= 0; i--)
	{
		b = n >> i;
		if (b)
		{
			if (b & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
