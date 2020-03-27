#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * rec - isdigit
 * @res: integer
 * Return: prints alphabet
 */
void rec(int res)
{
	if (res == 0)
	{
		return;
	}
	rec(res >> 1);
	if (res & 1)
		_putchar('1');
	else
		_putchar('0');
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
