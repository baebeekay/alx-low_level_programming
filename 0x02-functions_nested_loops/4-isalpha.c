#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 *
 * @c: The input character
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	char U, l;

	for (l = 'a'; l <= 'z'; l++)
	{
		for (U = 'A'; U <= 'Z'; U++)
		{
			if (c == l || c == U)
			{
				return (1);
			}
		}
	}
	return (0);
}
