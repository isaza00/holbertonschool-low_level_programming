#include "holberton.h"
/**
 * print_last_digit - prints alphabet
 * @n: integer
 * Return: prints alphabet
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		last_digit = n * -1;
	else
		last_digit = n;
	last_digit %= 10;
	_putchar(last_digit + '0');
	return (last_digit);
}
