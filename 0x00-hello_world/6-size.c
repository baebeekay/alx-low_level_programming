#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longType;
	long long int lonType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lonType));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
