#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers
 * @n: The output character
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
			{
			putchar(',');
			putchar(' ');
			}
		}
		putchar('\n');
	}
}
