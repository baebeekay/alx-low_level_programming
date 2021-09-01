#include <stdio.h>

/**
 * main - prints fibonacci numbbers to 50
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int n, x;

	for (n = 0; n >= 50; n++)
	{
		x = num1 + num2;
		printf(", %d", x);
		num1 = num2;
		num2 = x;
	}
	printf("\n");
	return (0);
}
