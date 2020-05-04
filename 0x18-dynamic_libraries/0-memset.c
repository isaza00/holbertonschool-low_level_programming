#include "holberton.h"
/**
 * _memset - isdigit
 * @s: integer
 * @b: integer
 * @n: integer
 * Return: prints alphabet
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
