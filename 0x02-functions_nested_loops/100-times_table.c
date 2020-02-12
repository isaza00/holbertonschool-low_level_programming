#include "holberton.h"
/**
 * print_times_table - prints alphabet
 * @n: integer
 * Return: prints alphabet
 */
void print_times_table(int n)
{
	int i;
	int j;
	int res;

	if ((n < 0) || (n > 15))
		return;

	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		_putchar(',');
		for (j = 1 ; j <= n; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
			else if ((res >= 10) & (res < 100))
			{
				_putchar(' ');
				_putchar(' ');
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(' ');
				_putchar((res / 100) + '0');
				_putchar(((res % 100) / 10) + '0');
				_putchar(((res % 100) % 10) + '0');
			}
			if (j != n)
				_putchar(',');
		}
		_putchar('\n');
	}
}
