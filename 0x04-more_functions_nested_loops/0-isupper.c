#include "main.h"

/**
 * _isupper - checks for uppercase
 * @c: Integer character
 * Return: Always 0
 */
int _isupper(int c)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}
