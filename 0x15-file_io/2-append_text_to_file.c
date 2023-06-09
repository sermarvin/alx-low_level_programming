#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on succes
 *         -1 on failure
 *         -1 if filename is NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int strlength = 0;
	int ch_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
		close(fd);
	}

	if (text_content != NULL)
	{
		while (text_content[strlength])
		{
			strlength++;
		}
		ch_written = write(fd, text_content, strlength);
	}
	if (ch_written == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
