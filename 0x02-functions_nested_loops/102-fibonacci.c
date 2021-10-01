#include <stdio.h>

/**
 * main - prints fibonacci numbers to 50
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int num1 = 1;
	long int num2 = 2;
	int i;
	long int x;

	printf("%lu, %lu, ", num1, num2);
	for (i = 0; i < 48; i++)
	{
		x = num1 + num2;
		printf("%lu", x);
		num1 = num2;
		num2 = x;
		if (i < 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
