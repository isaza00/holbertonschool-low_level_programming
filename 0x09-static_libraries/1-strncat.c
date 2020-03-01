#include "holberton.h"
/**
 * _strncat - isdigit
 * @dest: integer
 * @src: integer
 * @n: integer
 * Return: prints alphabet
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n;  j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
