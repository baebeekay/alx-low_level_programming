#include "main.h"

/**
 * *string_toupper - converts lowercase to uppercase
 * loop checks if character is in lower case then subtracts 32
 * @s: string charcter
* Return: 0
 */
char *string_toupper(char *s)
{
	int n;

	for (n = 0; s[n] != '\0'; n++)
	{
		if (s[n] >= 'a' && s[n] <= 'z')
		{
			s[n] = s[n] - 32;
		}
	}
	return (s);
}
