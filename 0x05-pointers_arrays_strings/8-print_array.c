#include "holberton.h"
#include <stdio.h>
/**
 * print_array - isdigit
 * @a: integer
 * @n: integer
 * Return: prints alphabet
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i != (n - 1))
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
