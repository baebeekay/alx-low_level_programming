#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int b, f;

	for (b = 0; b < 10; b++)
	{
		for (f = 'a'; f <= 'z'; f++)
		{
			_putchar(f);
		}
		_putchar('\n');
	}

}
