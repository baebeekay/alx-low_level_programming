#include "main.h"

/**
 * _strlen_recursion - gets the lenght of a string using recursion
 * @s: input string
 *
 * Return: lenght of a string
 */
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
