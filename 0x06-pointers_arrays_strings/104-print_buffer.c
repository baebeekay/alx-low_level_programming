#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: char character
 * @size: integer character
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int i, count = 0, size2 = size;
	char *p = b;

	if (size == 0)
		printf("\n");
	while (size > 0)
	{
		printf("%08x:", count);
		i = 0;
		while (size > 0 && i < 10)
		{
			if (!(i % 2))
				printf(" ");
			printf("%02x", *p++);
			i++;
			size--;
			count++;
		}
		while (count % 10 != 0)
		{
			if (!(count % 2))
				printf(" ");
			printf("  ");
			count++;
		}
		printf(" ");
		i = 0;
		while (size2 > 0 && i < 10)
		{
			if (*b > 31 && *b != 127)
				printf("%c", *b);
			else
				printf(".");
			size2--;
			i++;
			b++;
		}
		printf("\n");
	}
}
