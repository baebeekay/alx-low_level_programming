#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Augument count
 * @argv: Augument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
