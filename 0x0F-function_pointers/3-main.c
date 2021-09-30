#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((*argv[2] != '+' && *argv[2] != '-'
	    && *argv[2] != '/' && *argv[2] != '*'
	     && *argv[2] != '%') || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' && *argv[3] == '0') ||
	    (*argv[2] == '%' && *argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", (*get_op_func(argv[2]))(a, b));
	return (0);
}
