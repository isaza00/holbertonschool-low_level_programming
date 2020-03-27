#include "holberton.h"
/**
 * rec - isdigit
 * @res: integer
 * Return: prints alphabet
 */
void rec(int res)
{
	if (res > 0)
	{
		rec(res >> 1);
		_putchar((res & 1) + '0');
	}
}

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		rec(n);
}
