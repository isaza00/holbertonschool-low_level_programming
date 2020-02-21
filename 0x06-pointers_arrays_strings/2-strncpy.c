#include "holberton.h"
/**
 * _strncpy - isdigit
 * @dest: integer
 * @src: integer
 * @n: integer
 * Return: prints alphabet
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; (src[i] != '\0') && (i < n);  i++)
	{
		dest[i] = src[i];
	}
	for (; (i < n; i++)
		dest[i] = '\0';
	return (dest);
}
