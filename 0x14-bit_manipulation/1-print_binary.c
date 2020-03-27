#include "holberton.h"
/**
 * rec - isdigit
 * @res: integer
 * Return: prints alphabet
 */
void rec(unsigned long int res)
{
	if (res > 0)
	{
		rec(res >> 1);
		_putchar((res & 1) + '0');
	}
}
/**
 * print_binary - isdigit
 * @n: integer
 * Return: prints alphabet
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		rec(n);
}
