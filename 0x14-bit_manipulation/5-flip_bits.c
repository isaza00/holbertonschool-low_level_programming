#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * flip_bits - isdigit
 * @m: integer
 * @n: integer
 * Return: prints alphabet
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = 0;
	unsigned int i = 0;

	xor = n ^ m;
	while (xor > 0)
	{
		xor = xor & (xor - 1);
		i++;
	}
	return (i);
}
