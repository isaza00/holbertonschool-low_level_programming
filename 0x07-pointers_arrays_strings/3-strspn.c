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
	int inc = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				inc++;
			}
			if (s[i] == ',')
				break;
		}
	}
	return (inc);
}
