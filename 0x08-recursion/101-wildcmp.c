#include "main.h"

/**
 * wildcmp - compares two string
 * @s1: first string
 * @s2: second string
 * Return: 1(Success) otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
/*Checks for single character missing  */
		return (wildcmp(s1 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
/* Checks if string is at end */
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
			return (1);
		if (*(s1 + 1) != '\0' && *s2 == '\0')
			return (0);
/* Checks for multiple character missing */
	}
	return (0);
}
