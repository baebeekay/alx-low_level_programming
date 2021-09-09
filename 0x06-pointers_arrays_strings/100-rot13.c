#include "main.h"

/**
 * *rot13 - encodes a string in rot-13
 * @s: input character
 * Return: 0
 */
char *rot13(char *s)
{
	int i, j;
	char alphabe[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot_t[] =   "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; j < 52; j++)
			if (s[i] == alphabe[j])
				s[i] = rot_t[j], j = 52;
	return (s);
}
