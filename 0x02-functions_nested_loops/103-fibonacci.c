#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	long int sum_ant = 1;
	long int sum_new = 2;
	long int new = 2;
	long int total = 2;

	for (i = 0; i <= 47; i++)
	{
		new = sum_ant + sum_new;
		if (new < 4000000)
		{
			if ((new % 2) == 0)
			total += new;
		}
		sum_ant = sum_new;
		sum_new = new;
	}
	printf("%li\n", total);
	return (0);
}
