#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - isdigit
 * @s: integer
 * @c: integer
 * Return: prints alphabet
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
		}
	}
	if (s[i] == c)
		p = &s[i];
	else
		return ('\0');
	return (p);
}
