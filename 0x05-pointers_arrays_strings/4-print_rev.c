#include "holberton.h"
/**
 * print_rev - isdigit
 * @s: integer
 * Return: prints alphabet
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = (len - 1); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
