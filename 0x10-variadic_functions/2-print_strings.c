#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates strings
 * @n: num of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *p;
	va_list string;

	va_start(string, n);

	for (count = 0; count < n; count++)
	{
		p = va_arg(string, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
		printf("%s", p);
		}
		if (count < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(string);
}
