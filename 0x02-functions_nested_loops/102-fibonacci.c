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

	printf("%li, %li, ", sum_ant, sum_new);
	for (i = 0; i <= 47; i++)
	{
		new = sum_ant + sum_new;
		if (i < 47)
		{
		printf("%li, ", new);
		}
		else
			printf("%li\n", new);
		sum_ant = sum_new;
		sum_new = new;
	}
	return (0);
}
