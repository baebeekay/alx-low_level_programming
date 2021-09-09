#include "main.h"

/**
 * *leet - encodes leet character
 * @s: char character
 * Return: 0
 */
char *leet(char *s)
{
	int a, b;
	char m[] = {'4', '3', '0', '7', '1'};
	char n[] = {'a', 'e', 'o', 't', 'l'};
	char u[] = {'A', 'E', 'O', 'T', 'L'};

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if ((s[a] == n[b]) || (s[a] == u[b]))
				s[a] = m[b];
		}
	}

	return (s);
}
