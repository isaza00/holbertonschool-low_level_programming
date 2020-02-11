#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints alphabet
 * @n: integer
 * Return: prints alphabet
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			if (i > 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
	}
	else
	{
		for (i = n; i <= 98; i++)
			if (i < 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
	}
}
