#include "holberton.h"
/**
 * _print_rev_recursion - isdigit
 * @s: integer
 * Return: prints alphabet
 */
void _print_rev_recursion(char *s)
{
	int i = 0;
	
	if (s[i] == '\0')
	{
		return;
	}
	_print_rev_recursion(s+1);
	_putchar(*s);
}
