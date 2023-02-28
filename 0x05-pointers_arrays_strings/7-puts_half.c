#include "main.h"

/**
  * puts_half - Prints half of a string
  * @str: The is the pointer variables
  * Return: void
  */
void puts_half(char *str)
{
	int i, x, v;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	v = i / 2;
	if ( v % 2 != 0)
	{
		v = v-1;
	}

	for (x = v ; x < i ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
