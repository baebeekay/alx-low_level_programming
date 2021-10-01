#include "variadic_functions.h"
#include <stdarg.h>

/**
 *
 *
 *
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x = 0;

	va_list sum;
	va_start(sum, n);
	for(i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		x += va_arg(sum, int);
	}
	va_end(sum);
	return (x);
}
