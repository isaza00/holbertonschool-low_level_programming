#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"
/**
 * append_text_to_file - isdigit
 * @filename: integer
 * @text_content: integer
 * Return: prints alphabet
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, sz = 0, len = 0, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
	{
		return (-1);
	}
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			len++;
	}
	sz = write(fd, text_content, len);
	if (sz < 0)
		return (-1);
	close(fd);
	return (1);
}
