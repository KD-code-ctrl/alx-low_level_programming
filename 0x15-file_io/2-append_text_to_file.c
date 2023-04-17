#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * append_text_to_file - is a function that appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: is a null terminated string to add to the file
 * Return: 1 on success
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, _write, len;
	char *buffer;

	len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp < 0)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	buffer = text_content;
	len = strlen(text_content);
	_write = write(fp, buffer, len);
	if (_write < 0)
	{
		return (-1);
	}
	close(fp);
	return (1);
}
