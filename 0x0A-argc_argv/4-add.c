#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code for Holberton School students.
 * @argc: integer
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int sum = 0;

	int isdigit(int c);
	if (argc < 2)
	{
		puts("0");
		return (0);
	}
	for (i = 1; i <= (argc - 1); i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}


