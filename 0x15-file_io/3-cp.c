#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * cp_file - is a function that copies the conntents of a file into
 * another file
 * @filename_1: is the file we are going to copy from
 * @filename_2: is the file we are going copy to
 * Return: 1 on success
 */
int cp_file(const char *filename_1, const char *filename_2)
{
	int fp_1, fp_2, _read, _write;
	char buffer[1024];

	fp_1 = open(filename_1, O_RDONLY);
	if (!filename_1 || fp_1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_1);
		exit(98);
	}
	fp_2 = open(filename_2, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (!filename_2 || fp_2 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_2);
		exit(99);
	}
	while ((_read = read(fp_1, buffer, 1024)) > 0)
	{
		_write = write(fp_2, buffer, _read);
		if (_write != _read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename_2);
			exit(99);
		}
	}
	if (_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename_1);
		exit(98);
	}
	if (close(fp_1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_1);
		exit(100);
	}
	if (close(fp_2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fp_2);
		exit(100);
	}
	return (0);
}
/**
 * main - checks the code
 * @argc: is the number of arguments
 * @argv: is the the value or the argument it'self
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp_file(argv[1], argv[2]);
	exit(0);
}
