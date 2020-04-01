#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * copy_file_to_file - isdigit
 * @file_from: integer
 * @file_to: integer
 * Return: prints alphabet
 */
void copy_file_to_file(const char *file_from, const char *file_to)
{	int ff = -1, rff = 1, ft = -1, wft = 0;
	char buffer[1024];

	ff = open(file_from, O_RDONLY);
	if (ff < 0)
	{
		dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", file_from);
		exit(98);
	} ft = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (ft < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	do {
		rff = read(ff, buffer, 1024);
		if (rff < 0)
		{
			dprintf(STDERR_FILENO, "Error : Can't read from file %s\n", file_from);
			exit(98);
		}
		if (rff > 0)
		{
			wft = write(ft, buffer, rff);
			if (wft != rff)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
		}
	} while (rff > 0);
	if (close(ff) < 0)
	{
		dprintf(STDERR_FILENO, "Error : Can't close fd %d\n", ff);
		exit(100);
	}
	if (close(ft) < 0)
	{
		dprintf(STDERR_FILENO, "Error : Can't close fd %d\n", ft);
		exit(100);
	}
}

/**
 * main - copy content of a file to another file.
 * @ac: integer
 * @av: integer
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file_to_file(av[1], av[2]);
	exit(0);
	return (0);
}
