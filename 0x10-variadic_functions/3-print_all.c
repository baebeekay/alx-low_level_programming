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
	/* format variables */
	int i;
	float f;
	char c;
	char *s;

	va_start(all, format);
	while (format[x])
	{
		switch (format[x])
		{
		case 'i':
			i = va_arg(all, int);
			printf("%d", i);
			break;
		case 'f':
			f = (float)va_arg(all, double);
			printf("%f", f);
			break;
		case 'c':
			c = va_arg(all, int);
			printf("%c", c);
			break;
		case 's':
			s = va_arg(all, char *);
			if (s == NULL)
			{
				printf("nil");
			}
			printf("%s", s);
			break;
		}
		if ((format[x] == 'c' || format[x] == 'i' || format[x] == 'f' ||
		     format[x] == 's') && (format[x + 1] != '\0'))
		{
			printf(", ");
		}
		x++;
	}
	printf("\n");
	va_end(all);
}
