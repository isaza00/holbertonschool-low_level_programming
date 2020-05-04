#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function
 * @s: integer
 * @accept: integer
 * Return: prints alphabet
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	char *p = NULL;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	return (p);
}
