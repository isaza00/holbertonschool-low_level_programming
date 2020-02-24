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
	int j = 0;
	int diag1 = 0;
	int diag2 = 0;
	
	for(i = 0; i <= size; i++)
	{
		for(j = 0; j <= size; j++)
		{
			if (i == j)
			{
				diag1 += a[i][j];
			}
			if (i == (size - j) && j == (size - i))
				diag2 += a[i][j];
		}
	}
	printf("%i, %i\n", diag1, diag2)	
}