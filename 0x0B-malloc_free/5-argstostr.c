#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - isdigit
 * @ac: integer
 * @av: integer
 * Return: prints alphabet
 */
char *argstostr(int ac, char **av)
{
	char *s;
	int i = 0;
	int j = 0;
	int k = 0;
	int len = 0;

	int _putchar(char);
	if (ac < 2 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			len++;
	}
	s = malloc(len * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			s[k] = av[i][j];
			k++;
		}
		if (s[k] == '\0')
			s[k++] = '\n';
	}
	return (s);
}

