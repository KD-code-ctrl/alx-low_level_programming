#include "main.h"

/**
 * _puts - prints  a string
 * @str: is a pointer variable to the string
 * Return:0 when successful
 */
void _puts(char *str)
{
	int max, count;

	max = -1;
	for (count = 0 ; count > max ; count++)
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
}
