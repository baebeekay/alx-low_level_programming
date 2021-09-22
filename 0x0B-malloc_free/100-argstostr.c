#include "main.h"
#include <stdlib.h>

/**
 * argstostr - appends all the arguments
 * @ac: Argument count
 * @av: Arguments vecttor
 * Return: a pointer of grid(success) otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, count = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < av[i][j]; j++)
		{
			count++;
		}
	}
	p = malloc(sizeof(char) * (count + ac + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			p[n] = av[i][j];
			n++;
		}
		p[n] = '\n';
		n++;
	}
	return (p);
}
