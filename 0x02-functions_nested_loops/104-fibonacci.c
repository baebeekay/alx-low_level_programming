#include <stdio.h>

/**
 * main - prints fibonacci numder to 98
 *
 * Return: Always 0
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int y, z;

	for (y = 1; y <= 98; y++)
	{
		printf("%d ,", n1);
		z = n2 + n1;
		n1 = n2;
		n2 = z;
	}
	printf("\n");
	return (0);
}
