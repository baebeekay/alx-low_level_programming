#include "main.h"

/**
 * rev_string - reverses the string
 * @s: string character
 */
void rev_string(char *s)
{
	int x, y, n = 0;
	char a[1000];

	for (x = 0; *(s + x) != '\0'; x++)
	{
		a[x] = s[x];
	}
	for (y = x - 1; y >= 0; y--)
	{
		s[y] = a[n];
		n++;
	}
}
