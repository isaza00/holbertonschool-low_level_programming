#include "holberton.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: prints alphabet
 */
void print_alphabet(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i <= 25; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
