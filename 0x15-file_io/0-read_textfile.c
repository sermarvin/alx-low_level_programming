#include "main.h"

/*
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: the name of the file to be read
 * @letters: the number of letters it reads and prints
 *
 * Return: actual number of letters it could read and print
 *         0 if filename is NULL
 *         0 if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ch_read, ch_written;
	char *buffer;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
		close (fd);
	}

	ch_read = read(fd, buffer, letters);
	close(fd);
	if (ch_read == -1)
	{
		free(buffer);
		return (0);
	}

	ch_written = write(STDOUT_FILENO, buffer, ch_read);
	if (ch_written == -1)
	{
		return (0);
	}

	if (ch_written != ch_read)
		return (0);

	return (ch_written);
}
