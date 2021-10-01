#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets the sum
 * @n: first parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int x = 0;

	va_list sum;

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		x += va_arg(sum, unsigned int);
	}
	va_end(sum);
	return (x);
}
