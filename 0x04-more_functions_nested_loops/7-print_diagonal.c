#include "main.h"

/**
 * print_diagonal - prints diagonal lines
 * @n: input character
 * Return: 0
 */
void print_diagonal(int n)
{
	int y, z;

	for (y = 0; y < n; y++)
	{
		for (z = 0; z < y; z++)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
