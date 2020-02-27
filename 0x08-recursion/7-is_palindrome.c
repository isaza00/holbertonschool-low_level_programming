#include "holberton.h"
/**
 * is_palindrome - isdigit
 * @s: integer
 * Return: prints alphabet
 */
int is_mine(char *s, int len)
{
	int i = 0;

	if (s[i] != s[len])
		return (0);
	i++;
	len--;
	if (i == len)
		return (1);
	return(is_mine(s, len));
}
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
int is_palindrome(char *s)
{
	int len = 0;
	
	len = _strlen_recursion(s);
	if (s[0] == '\0')
	{
		return (1);
	}
	return (is_mine(s, len - 1));
}

