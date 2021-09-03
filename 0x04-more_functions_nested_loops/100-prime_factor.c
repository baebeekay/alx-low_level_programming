#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a = 612852475143;
	int d = 2;
	long int b = a;

	while (b != 1)
	{
		if (b % d == 0)
		{
			if (b % b == 0)
			{
				b = b / d;
			}
		}
		else
		{
			d++;
		}
	}
		printf("%d\n", d);
		return (0);
}
