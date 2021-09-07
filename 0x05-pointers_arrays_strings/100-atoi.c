#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string character
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int sum = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			sum = sum * 10 + *s - '0';
		}

		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		sum = (-sum);

	return (sum);
}
