#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @s: char character
 * @c: second char charcter
 * Return: @s if character is found or NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
