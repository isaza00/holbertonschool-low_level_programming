#include <stdio.h>
/**
 * main - isdigit
 *
 * Return: prints alphabet
 */
int main(void)
{
	long int i;
	long int num = 612852475143;

	for (i = 2; i <= num; i++)
	{
		if (num % i == 0)
		{
			if (i == num)
				break;
			num /= i;
			i = 2;
		}
	}
	printf("%li\n", num);
	return (0);
}

