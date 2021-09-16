#include "main.h"

int pal_check(char *c, int i, int j);
int _strlen(char *l);
/**
 * is_palindrome - return 1 if string is a palindrome
 * @s: char charcter
 * Return: 1 (Success) otherwie returns 0
 */
int is_palindrome(char *s)
{
	int n = _strlen(s);

	if (n == 0)
		return (1);
	return (pal_check(s, 0, n - 1));
}

/**
 * pal_check - checks for palindrome in a string
 * @c: pointer to a string
 * @i: lterator
 * @j: iterator
 * Return: 1(Success) otherwise 0
 */
int pal_check(char *c, int i, int j)
{
	if (*c == 0)
	{
		return (1);
	}
	if (c[i] != c[j])
		return (0);
	if (i >= j)
		return (1);
	return (pal_check(c, i + 1, j - 1));
}
/**
 * _strlen - checks the lenght of a string
 * @l: pointer to a string
 * Return: lenght of a string
 */
int _strlen(char *l)
{
	if (*l == '\0')
		return (0);
	else
		return (1 + _strlen(l + 1));
}
