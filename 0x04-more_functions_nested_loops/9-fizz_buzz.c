#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int g;

	for (g = 1; g <= 100; g++)
	{
		if (g % 3 == 0 && g % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (g % 5 == 0)
		{
			printf("Buzz");
			if (g != 100)
			{
				printf(" ");
			}
		}
		else if (g % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", g);
		}
	}
	printf("\n");
	return (0);
}
