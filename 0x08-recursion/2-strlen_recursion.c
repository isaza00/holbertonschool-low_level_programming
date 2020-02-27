#include "holberton.h"
/**
 * _strlen_recursion - isdigit
 * @s: integer
 * Return: prints alphabet
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
