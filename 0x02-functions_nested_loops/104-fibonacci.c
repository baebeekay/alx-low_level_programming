#include <stdio.h>

/**
 * main - prints fibonacci numder to 98
 *
 * Return: Always 0
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	int y;
	long int z;

	printf("%lu, %lu, ", n1, n2);
	for (y = 3; y <= 98; y++)
	{
		z = n1 + n2;
		printf("%lu", z);
		n1 = n2;
		n2 = z;
		if (y < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
