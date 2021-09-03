#include "main.h"

/**
 * print_triangle - Entry point
 * @size: input character
 * Return: 0
 */
void print_triangle(int size)
{
	int v, p, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (v = 1; v <= size; v++)
		{
			for (p = size; p > v; p--)
			{
				_putchar(' ');
			}
			for (x = 0; x < v; x++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
