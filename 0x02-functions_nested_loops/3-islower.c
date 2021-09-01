#include "main.h"

/**
 * _islower - prints lowercase
 * @c: input character
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	char m;

	for (m = 'a'; m <= 'z'; m++)
	{
		if (m == c)
		{
			return (1);
		}
	}
	return (0);
}
