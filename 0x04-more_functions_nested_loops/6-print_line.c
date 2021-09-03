#include "main.h"

/**
 * print_line - prints line
 * @n: input character
 * Return: 0
 */
void print_line(int n)
{
	int s, t = '_';

	for (s = 0; s < n; s++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(t);
	}
	_putchar('\n');
}
