#include "main.h"

/**
 * more_numbers - prints digits to 14, 10 times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int s, t;

	for (s = 0; s < 10; s++)
	{
		for (t = 0; t < 15; t++)
		{
			if (t > 9)
			{
				_putchar(t / 10 + '0');
			}
				_putchar(t % 10 + '0');
		}

		_putchar('\n');
	}
}
