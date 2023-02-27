#include "main.h"

/**
 * _strlen - prints the length of a string
 * @str: is a pointer variable to the string
 * Return:0 when successful
 */
int _strlen(char *str)
{
	int max, count;

	max = 256;
	for (count = 0 ; count < max ; count++)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[count]);
		}
	}
	return (0);
}
