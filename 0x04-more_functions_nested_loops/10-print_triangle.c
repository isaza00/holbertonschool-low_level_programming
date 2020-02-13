#include "holberton.h"
/**
 * print_triangle - isdigit
 * @size: integer
 * Return: prints alphabet
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (!(size <= 0))
	{
		for (i = size; i > 0; i--)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');

			}
			for (k = 0; k < (size - i + 1); k++)
				_putchar(35);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
