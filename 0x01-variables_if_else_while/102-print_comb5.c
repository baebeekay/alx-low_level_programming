#include <stdio.h>

/**
 * main - prints two two-digit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y, z;

	for (y = 0; y < 99; y++)
	{
		for (z = y + 1; z < 100; z++)
		{
			putchar('0' + (y / 10));
			putchar('0' + (y % 10));
			putchar(' ');
			putchar('0' + (z / 10));
			putchar('0' + (z % 10));
			if (y / 10 != 9 || y % 10 != 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
