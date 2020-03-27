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
	return ((n >> index) & 1);
}
