#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * min_coins - check the code for Holberton School students.
 * @cents: integer
 * @i: array
 * Return: Always 0.
 */
int min_coins(int cents, int i)
{
	int coins[] = {25, 10, 5, 2, 1};

	if (cents == 0)
		return (0);
	if (cents >= coins[i])
	{
		return (1 + min_coins(cents - coins[i], i));
	}
	return (min_coins(cents, i + 1));
}
/**
 * main - check the code for Holberton School students.
 * @argc: integer
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cents = 0;
	int i = 0;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	printf("%d\n", min_coins(cents, i));
	return (0);
}


