#include "main.h"

/**
 * puts_half - prints half off the string characters
 * @str: string character
 */
void puts_half(char *str)
{
	int x, y;

	for (x = 0; *(str + x) != '\0'; x++)
	{
	}
	for (y = (x + 1) / 2; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
