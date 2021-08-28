#include <stdio.h>
#include <ctype.h>

/**
 * main - prints hexadecimal
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g, m;

	for (g = 0; g < 10; g++)
	{
		putchar('0' + g);
	}
	for (m = 'A'; m <= 'F'; m++)
	{
		putchar(tolower(m));
	}
	putchar('\n');
	return (0);
}
