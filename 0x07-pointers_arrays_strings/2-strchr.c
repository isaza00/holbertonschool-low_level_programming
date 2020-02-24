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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
	}
	return (p);
}
