#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int inc = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = inc; j <= 9; j++)
		{
			if (!(i == j))
			{
				putchar(i + '0');
				putchar(j + '0');
				if (!(i == 8 && j == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		inc++;
	}
	putchar('\n');
	return (0);
}
