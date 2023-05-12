#include "main.h"

int copy_from_file_to(const char *file_from, const char *file_to);

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments the main function accepts
 * @av: name of the files
 *
 * Return: 0
*/

int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	copy_from_file_to(av[1], av[2]);
	return (0);
}

int copy_from_file_to(const char *file_from, const char *file_to)
{
	char *buffer;
	size_t bytes = 1024;
	int fd, fd1;
	ssize_t ch_read, ch_written;

	fd = open(file_from, O_RDONLY);
	if (fd == -1 || file_from == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	fd1 = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	buffer = malloc(sizeof(char) * bytes);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	while ((ch_read = read(fd, buffer, bytes)) > 0)
	{
		ch_written = write(fd1, buffer, ch_read);
		if (fd1 == -1 || ch_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	else
	{
		close(fd1);
	}
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else
	{
		close(fd);
	}
	return (1);
}
