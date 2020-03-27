#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * set_bit - isdigit
 * @index: integer
 * @n: integer
 * Return: prints alphabet
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;

	if (index > 31)
		return (-1);
	bit = bit << index;
	*n |= bit;
	return (1);
}

