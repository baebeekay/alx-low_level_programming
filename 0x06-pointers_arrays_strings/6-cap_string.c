#include "main.h"

/**
 * *cap_string - capitalizes every letter in a string
 * @s: string character
 * Return: s
 */
char *cap_string(char *s)
{
	int i, n, cap;
	char cases[] = ",;.!?(){}\n\t\" ";

	for (i = 0, cap = 0; s[i] != '\0'; i++)
	{
		if (s[0] > 96 && s[0] < 123)
			cap = 1;
		for (n = 0; cases[n] != '\0'; n++)
		{
			if (cases[n] == s[i])
				cap = 1;
		}
		if (cap)
		{
			if (s[i] > 96 && s[i] < 123)
			{
				s[i] -= 32;
				cap = 0;
			}
			else if (s[i] > 64 && s[i] < 91)
				cap = 0;
			else if (s[i] > 47 && s[i] < 58)
				cap = 0;
		}
	}
	return (s);
}
