#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string characvter
 */
void print_rev(char *s)
{
	int n, c = 0;

	for (n = 0; *(s + n) != '\0'; n++)
	{
	}
	for (c = n - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
