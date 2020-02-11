#include "holberton.h"
/**
 * print_alphabet_x10 - prints alphabet
 *
 * Return: prints alphabet
 */
void print_alphabet_x10(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
