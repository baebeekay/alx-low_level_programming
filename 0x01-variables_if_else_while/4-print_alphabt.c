#include <stdio.h>
#include <ctype.h>

/**
 * main - prints letters without e and q
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int g;

	for (g = 'A'; g <= 'Z'; g++)
	{
		if (g != 'E' && g != 'Q')
		{
			putchar(tolower(g));
		}
	}
	{
		putchar('\n');
	}
	return (0);
}
