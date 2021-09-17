#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Augument count
 * @argv: Augument vector
 * Return: 0 (Success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int n, n1;

	n = n1 = 0;
	if (argc > 2)
	{
		n = atoi(argv[1]);
		n1 = atoi(argv[2]);
		printf("%d\n", n * n1);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
