#include <stdio.h>

/**
 * main - prints combination of numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int o;

	for (o = 0; o < 10; o++)
	{
		putchar('0' + o);

		if (0 != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
