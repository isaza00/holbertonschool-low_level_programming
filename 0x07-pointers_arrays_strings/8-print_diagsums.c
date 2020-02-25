#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - function
 * @a: integer
 * @size: integer
 * Return: prints alphabet
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int final = 0;
	int diag1 = 0;
	int diag2 = 0;

	final = ((size * size) - 1);
	for (i = 0; i <= final; i += (size + 1))
	{

		diag1 = diag1 + a[i];
	}
	for (i = (size - 1); i <= (final - 1); i += (size - 1))
	{
		diag2 = diag2 + a[i];
	}
	printf("%d, %d\n", diag1, diag2);
}
