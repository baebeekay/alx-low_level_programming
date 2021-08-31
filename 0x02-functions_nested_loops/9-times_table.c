#include "main.h"

/**
 * times_table - prints the 9 times table.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x, y, z = 0;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			z = y * x;
			if (y != 0)
			{
				if (z <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			else
			{
				if (z < 9)
				{
					_putchar(z + '0');
				}
				else
				{
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}

		}
		_putchar('\n');
	}
}
