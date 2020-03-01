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
	int mul = 1;

	if ((argc < 3) || (argc > 3))
	{
		puts("Error");
		return (1);
	}
	for (i = 1; i <= (argc - 1); i++)
		mul *= atoi(argv[i]);
	printf("%i\n", mul);
	return (0);
}



