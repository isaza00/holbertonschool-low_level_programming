#include "holberton.h"
/**
 * is_mine - isdigit
 * @s: integer
 * @len: integer
 * @par: integer
 * Return: prints alphabet
 */
int is_mine(char *s, int len, int par)
{
	int i = 0;

	if (s[i] != s[len])
		return (0);
	if (par)
		i++;
	if (i == len)
		return (1);
	if (par == 0)
		i++;
	return (is_mine(&s[i], len - 2, par));
}
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
/**
 * is_palindrome - isdigit
 * @s: integer
 * Return: prints alphabet
 */
int is_palindrome(char *s)
{
	int len = 0;
	int par = 0;

	len = _strlen_recursion(s);
	par = (len % 2 == 0) ? 1 : 0;

	if (s[0] == '\0')
	{
		return (1);
	}
	return (is_mine(s, len - 1, par));
}

