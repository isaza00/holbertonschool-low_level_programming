#include "holberton.h"
/**
 * reverse_array - isdigit
 * @a: integer
 * @n: integer
 * Return: prints alphabet
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp = 0;

	for (i = 0; i <= ((n - 1) - i); i++)
	{
		temp = a[i];
		a[i] = a[(n - 1) - i];
		a[(n - 1) - i] = temp;
	}
}
