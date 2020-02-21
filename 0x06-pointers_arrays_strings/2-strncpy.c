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
	size_t i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
