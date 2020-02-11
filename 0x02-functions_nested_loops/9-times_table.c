#include "holberton.h"
/**
 * times_table - prints alphabet
 *
 * Return: prints alphabet
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
		{
			res = i * j;
			if (res < 10)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				if ((i < 2) || (i == 2 && j < 4) || (i == 3 && j < 3) ||
				(i == 4 && j < 2) || (i >= 5 && j < 1))
				{
					_putchar(' ');
					_putchar(' ');
				}
				else
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
