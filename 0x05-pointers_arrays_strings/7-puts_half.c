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
	if ( i % 2 == 1)
	{
		v = (i-1)/2;
	}
	else
	{
		v = i/2;
	}

	for (x = v+1 ; x < i ; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
