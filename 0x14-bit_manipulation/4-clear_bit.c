#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * clear_bit - isdigit
 * @index: integer
 * @n: integer
 * Return: prints alphabet
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 4294967294;

	if (index > 31)
		return (-1);
	bit = bit << index;
	*n &= bit;
	return (1);
}
