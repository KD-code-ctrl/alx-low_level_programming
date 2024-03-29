#include "main.h"
/**
 * create_file - is a function that creates a file
 * @filename: is the name of the file to create
 * @text_content: is a null terminated string to write to the file
 * Return: if successful
 */
int create_file(const char *filename, char *text_content)
{
	int fp, _write, len;
	char *buffer;

	len = 0;
	if (filename == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
