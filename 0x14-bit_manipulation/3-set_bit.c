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
	unsigned int i = 0;
	unsigned long int bit = 1, m = 0;

	if (index > 63)
		return (-1);
	if (index == 0)
	{
		*n |= bit;
		return (1);
	}
	m = *n;
	while (m > 0)
	{
		m = m >> 1;
		bit = bit << 1;
		i++;
		if (i == index)
		{
			*n |= bit;
			return (1);
		}
	}
	return (-1);
}

