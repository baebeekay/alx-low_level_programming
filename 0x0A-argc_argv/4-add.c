#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry Point
 * @argc: Augument count
 * @argv: Augument Vector
 * Return: Error if string haa non digit character
 */
int main(int argc, char *argv[])
{
	int add = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
