#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success
 *         -1 on failure (file can not be created, written, write fails...)
 *         -1 if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
		close(fd);
	}
	if (text_content == NULL)
		text_content = "";

	while (text_content[i])
	{
		i++;
	}

	write(fd, text_content, i);
	close(fd);
	return (1);
}
