#include "holberton.h"
#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: integer
 * @argv: array
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i <= (argc - 1); i++)
		printf("%s\n", argv[i]);
	return (0);
}
