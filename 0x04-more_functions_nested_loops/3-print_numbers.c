#include "main.h"

/**
 * print_numbers - prints digiys to 9
 *
 * Return: 0
 */
void print_numbers(void)
{
	int e;

	for (e = 0; e < 10; e++)
	{
		_putchar('0' + e);
	}
	_putchar('\n');
}
