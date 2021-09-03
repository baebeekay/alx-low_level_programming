#include "main.h"

/**
 * print_square - prints square
 * @size: size of square
 * Return: 0
 */
void print_square(int size)
{
	int f, g;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (f = 0; f < size; f++)
		{
			_putchar('#');

			for (g = 1; g < size; g++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}

	}
}
