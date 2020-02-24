#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - isdigit
 * @s: integer
 * @accept: integer
 * Return: prints alphabet
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int inc = 0;
	int i = 0;
	int j = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == ' ')
				break;
			if (accept[i] == s[j])
			{
				inc++;
			}
		}
	}
	return (inc);
}
