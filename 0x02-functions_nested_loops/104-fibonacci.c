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
	int y = 0;
	long int z;

	while (y < 98)
	{
		z = n1 + n2;
		n1 = n2;
		n2 = z;
		printf("%lu", z);
		if (y < 97)
		{
			printf(", ");
		}
		y++;
	}
	printf("\n");
	return (0);
}
