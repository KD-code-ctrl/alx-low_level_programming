#include "main.h"
/**
 * read_textfile - is a function that reads a text file and prints it out to
 * the STDOUT
 * @filename: is the file to be read
 * @letters: is the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n_bytes, n_write, fd;
	char *buffer = malloc(letters * sizeof(char));

	if (buffer == NULL)
	{
		return (0);
	}
	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (0);
	}
	n_bytes = read(fd, buffer, letters);
	if (n_bytes < 0)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_write = write(STDOUT_FILENO, buffer, n_bytes);
	if (n_write != n_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_write);
}
