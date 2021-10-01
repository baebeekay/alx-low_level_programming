#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: separates the nums
 * @n: first parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, num;

	va_list value;

	va_start(value, n);

	for (i = 0; i < n; i++)
	{
		num =  va_arg(value, unsigned int);
		printf("%d", num);
		if (i != n - 1 && separator != 0)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(value);
}
