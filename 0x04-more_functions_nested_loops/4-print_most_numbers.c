#include "main.h"

/**
 * print_most_numbers - prints digits to 9 except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int w;

	for (w = 0; w < 10; w++)
	{
		if (w != 2 && w != 4)
		{
			_putchar('0' + w);
		}
	}
	_putchar('\n');
}
