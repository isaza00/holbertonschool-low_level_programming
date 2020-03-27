#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * exptwo - isdigit
 * @pos: integer
 * Return: prints alphabet
 */
unsigned int exptwo(unsigned int pos)
{
	unsigned int mul = 1, i = 0;

	if (pos == 0)
		return (1);
	for (i = 0; i < pos; i++)
	{
		mul *= 2;
	}
	return (mul);
}
/**
 * binary_to_uint - isdigit
 * @b: integer
 * Return: prints alphabet
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, len = 0;
	unsigned int sum = 0, num = 0, pos = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		len++;
	}
	for (i = len; i > 0; i--)
	{
		pos = len - i;
		num = b[i - 1] - '0';
		sum += exptwo(pos) * num;
	}
	return (sum);
}
