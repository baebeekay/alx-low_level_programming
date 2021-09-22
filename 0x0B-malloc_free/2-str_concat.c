#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - appends two strings
 * @s1: first string
 * @s2: second string
 * Return: p(success) otherwise null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int a, b, n, x, sumlen;
	unsigned int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	for (a = 0; *(s1 + a); a++)
		len1++;
	if (s2 == NULL)
	{
		s1 = "";
	}
	for (b = 0; *(s2 + b); b++)
		len2++;
	sumlen = len1 + len2 + 1;
	p = malloc(sizeof(char) * sumlen);
	if (p == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < len1; x++)
		p[x] = s1[x];
	for (n = 0; n <= len2; n++)
		p[x + n] = s2[n];
	p[x + n] = '\0';
	return (p);
}
