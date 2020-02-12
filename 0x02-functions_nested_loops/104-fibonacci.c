#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	double sum_ant = 1;
	double sum_new = 2;
	double new = 2;

	printf("%lf, %lf, ", sum_ant, sum_new);
	for (i = 0; i <= 95; i++)
	{
		if (new > 1000000000)
		{
			new = sum_ant / 1000000000 + sum_new / 1000000000;
		}
		else
			new = sum_ant + sum_new;
			
		if (i < 95)
		{
		printf("%lf, ", new);
		}
		else
			printf("%lf\n", new);
		sum_ant = sum_new;
		sum_new = new;
	}
	return (0);
}
