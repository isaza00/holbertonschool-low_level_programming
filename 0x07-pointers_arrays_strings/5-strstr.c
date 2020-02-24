#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function
 * @haystack: integer
 * @needle: integer
 * Return: prints alphabet
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i] && haystack[i] != 0)
		{
			p = &haystack[i];
			return (p);
		}
	}
	return (p);
}
