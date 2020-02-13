#include "holberton.h"
/**
 * print_square - isdigit
 * @n: integer
 * Return: prints alphabet
 */
void print_square(int n)
{
	int i;
	int j;

	if (!(n <= 0))
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
