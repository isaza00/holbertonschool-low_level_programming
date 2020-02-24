#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - function
 * @haystack: integer
 * @needle: integer
 * Return: prints alphabet
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;
	char *p = NULL;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == haystack[i] && needle[j] != '\0')
		{
			p = &haystack[i];
			j++;
		}
		else if (needle[j] != haystack[i])
		{
			p = NULL;
		}
	}
	return (p - j + 1);
}
