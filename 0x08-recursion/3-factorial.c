#include "main.h"

/**
 * factorial - calculates the factorial of any number
 * @n: input integer character
 *
 *Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		return (n * factorial(n - 1));
}
