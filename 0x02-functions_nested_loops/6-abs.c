#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer
 *
 * @x: The input character
 * Return: Always 0 (Success)
 */
int _abs(int x)
{

	if (x < 0)
	{
		x = x * -1;
	}
	return (x);
}
