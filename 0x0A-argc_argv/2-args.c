#include <stdio.h>

/**
 * main - Entry Point
 * @argc: Augument count
 * @argv: Augument vector
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
		argv[0] = 0;
	}
	return (0);
}
