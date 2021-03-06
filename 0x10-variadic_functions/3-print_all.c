#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints any the format type
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	va_list all;
	char *s;

	va_start(all, format);
	while (format == NULL)
	{	printf("\n");
		return;
	}
	while (format[x])
	{
		switch (format[x])
		{
		case 'i':
			printf("%d", va_arg(all, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(all, double));
			break;
		case 'c':
			printf("%c", va_arg(all, int));
			break;
		case 's':
			s = va_arg(all, char *);
			if (s == NULL)
			{
				printf("(nil)");
				break;
			}
			printf("%s", s);
			break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' ||
		     format[x] == 's') && (format[x + 1] != '\0'))
		{
			printf(", ");
		} x++;
	}
	printf("\n");
	va_end(all);
}
