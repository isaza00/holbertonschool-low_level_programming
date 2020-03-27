#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * get_bit - isdigit
 * @index: integer
 * @n: integer
 * Return: prints alphabet
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index > 31)
		return (-1);
	if (index == 0)
		return (n & 1);
	while (n > 0)
	{
		n = n >> 1;
		i++;
		if (i == index)
		{
			return (n & 1);
		}
	}
	return (-1);
}
