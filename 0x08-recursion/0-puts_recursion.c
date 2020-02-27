#include "holberton.h"
/**
 * _puts_recursion - isdigit
 * @s: integer
 * Return: prints alphabet
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
