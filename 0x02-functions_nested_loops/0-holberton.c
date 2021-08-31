#include "main.h"

/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *c = "_putchar";
	int n;

	for (n = 0; n < 10; n++)
	{
		_putchar(c[n]);
	}
	_putchar('\n');

	return (0);
}
