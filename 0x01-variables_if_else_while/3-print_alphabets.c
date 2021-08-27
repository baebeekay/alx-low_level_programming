#include <stdio.h>
#include <ctype.h>

/**
 * main - prints lowercase then upper case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p;

	for (p = 'A'; p <= 'Z'; p++)
	{
		putchar(tolower(p));
	}
	for (p = 'a'; p <= 'z'; p++)
	{
		putchar(toupper(p));
	}
	{
		putchar('\n');
	}

	return (0);
}
