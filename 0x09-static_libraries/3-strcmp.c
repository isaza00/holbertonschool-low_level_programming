#include "holberton.h"
/**
 * _strcmp - isdigit
 * @s1: integer
 * @s2: integer
 * Return: prints alphabet
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++)
	{
	}
	return (s1[i] - s2[i]);
}
