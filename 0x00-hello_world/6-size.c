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

	printf("size of a char: %d byte(s)\n", sizeof(charType));
	printf("size of an int: %d byte(s)\n", sizeof(intType));
	printf("size of a long int: %d byte(s)\n", sizeof(longType));
	printf("size of a long long int: %d byte(s)\n", sizeof(lonType));
	printf("size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}
