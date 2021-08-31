#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @L: The innput value
 * Return: Always 0 (Success)
 */
int print_last_digit(int L)
{

	L = L % 10;
	if (L < 0)
	{
		L = L * -1;
		_putchar('0' + L);
		return (L);
	}
	else
	{
		_putchar('0' + L);
		return (L);
	}
}
