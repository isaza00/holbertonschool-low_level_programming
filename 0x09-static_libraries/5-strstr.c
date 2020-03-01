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
	int len = 0;
	int found = 0;
	char *p = NULL;

	if (needle[0] == '\0')
		return ((char *)haystack);
	for (i = 0; needle[i] != '\0'; i++)
		len++;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (j > 0 && (needle[j] != haystack[i]))
		{
			found = 0;
			j = 0;
		}
		if (needle[j] == haystack[i])
		{
			found += 1;
			j++;
		}
		if (len == found)
		{
			p = &haystack[i + 1 - j];
			return (p);
		}
	}
	return (p);
}

