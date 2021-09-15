#include "main.h"

int sqrt_check(int i, int n);
/**
 * _sqrt_recursion - find square root using recursion
 * @n: integer to find
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_check(1, n));
}

/**
 * sqrt_check - checks for square root
 * @i: input integer
 * @n:  integer to find
 * Return: square root
 */
int sqrt_check(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqrt_check(i + 1, n));
}
