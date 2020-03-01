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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
	return (s);
}
