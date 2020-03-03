#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - isdigit
 * @str: integer
 * Return: prints alphabet
 */
char *_strdup(char *str)
{
	char *cpy;
	int i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
	{}
	cpy = malloc(sizeof(char) * len);
	if (cpy == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		cpy[i] = str[i];
	return (cpy);
}


