#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Description: use unlimited coins of values 25, 10, 5, 2, & 1 cent
 * Return: 0 if program success,or 1 if failure
 */


int main(int argc, char *argv[])
{
	int a, n = 0, i, t;
	int c[5] = {25, 10, 5, 2, 1};

/* c = coins, a = sets atoi, i = iteration, t = temporal for swap */

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		puts("0");
		return (1);
	}
	else
	{
		for (i = 0; i < 5; i++)
		{
			t = a / c[i];
			a -= t * c[i];
			n += t;
			if (a == 0)
				break;
		}
	}
	printf("%d\n", n);
	return (0);
}
