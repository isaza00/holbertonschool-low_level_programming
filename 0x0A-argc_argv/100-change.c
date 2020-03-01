#include <stdio.h>
#include <stdlib.h>
/**
 * change - get change
 * @cents: amount of coins from main function
 * Return: change
 */
int change(int cents)
{
	int q = 25, d = 10, n = 5, t = 2, p = 1;
	int coins;

	while (cents > 0)
	{
		while (cents >= q)
		{
			cents -= q;
			coins++;
		}
		while (cents >= d)
		{
			cents -= d;
			coins++;
		}
		while (cents >= n)
		{
			cents -= n;
			coins++;
		}
		while (cents >= t)
		{
			cents -= t;
			coins++;
		}
		while (cents >= p)
		{
			cents -= p;
			coins++;
		}
	}
	return (coins);
}
/**
 * main - get change
 * @argc: amount of coins from main function
 * @argv: arguments
 * Return: change
 */
int main(int argc, char *argv[])
{
	int cents = 0;

	int change(int cents);
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	printf("%d\n", change(cents));
	return (0);
}

