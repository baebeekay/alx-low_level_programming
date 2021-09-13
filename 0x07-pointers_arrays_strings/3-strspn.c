#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: first character
 * @accept: second caharcter
 * Return: lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
		}
		if (accept[j] != s[i])
		{
			break;
		}
	}
	return (n);
}
