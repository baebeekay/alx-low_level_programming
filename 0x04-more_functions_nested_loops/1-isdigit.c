#include "main.h"

/**
 * _isdigit - checks for digits
 * @c: integer character
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if (c == n)
		{
			return (1);
		}
	}
	return (0);
}
