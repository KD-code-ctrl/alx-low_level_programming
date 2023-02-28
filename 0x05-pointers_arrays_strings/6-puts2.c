#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: is the pointer variable
 * Return:0 when successful
 */
void puts2(char *str)
{
	int i, n;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	for (n = 0 ; n <= i ; n += 2)
	{
		if (str[n] == '\0')
		{
			_putchar('\n');
			break;
		}
		else
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
