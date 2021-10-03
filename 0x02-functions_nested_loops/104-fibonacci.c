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

	for (y = 0; y < 98; y++)
	{
		z = n1 + n2;
		n1 = n2;
		n2 = z;
		printf("%lu", z);
		if (y < 97)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
