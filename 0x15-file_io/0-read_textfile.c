#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * read_textfile - isdigit
 * @filename: integer
 * @letters: integer
 * Return: prints alphabet
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz, rd;
	char *buffer;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
	{
		free(buffer);
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	sz = write(STDOUT_FILENO, buffer, rd);
	if (sz < 0)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (sz);
}
