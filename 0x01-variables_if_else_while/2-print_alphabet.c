#include <stdio.h>
#include <ctype.h>

/**
 * main - prints alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y;

	for (y = 'A'; y <= 'Z'; y++)
	{
		putchar(tolower(y));
		putchar('\n');
	}

	return (0);
}
