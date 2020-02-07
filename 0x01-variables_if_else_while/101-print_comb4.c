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
	int m;
	int incUni = 0;
	int incDec = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = incDec; j <= 9; j++)
		{
			for (m = incUni; m <= 9; m++)
			{
				if (!(i == j || i == m || j == m))
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(m + '0');
					if (!((i == 7 && j == 8) && (m == 9)))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			incUni++;
		}
		incDec++;
		incUni = incDec;
	}
	putchar('\n');
	return (0);
}
