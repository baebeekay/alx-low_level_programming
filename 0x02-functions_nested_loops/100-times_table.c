#include "main.h"

/**
 * print_times_table - prints times table
 * @n: Input character
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
	int q, r, s;

	if (n < 0 && n > 15)
	{
		for (q = 0; q < n; q++)
		{
			for (r = 0; r < n; r++)
			{
				s = r * q;
				if (s <= 9)
				{
					if (r != 0)
					{
						_putchar(',');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				_putchar(s + '0');
				}
				else if (s < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(s / 10 + '0');
					_putchar(s % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(((s / 10) / 10) + '0');
					_putchar(((s % 100) / 10) + '0');
					_putchar(((s % 100) % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
