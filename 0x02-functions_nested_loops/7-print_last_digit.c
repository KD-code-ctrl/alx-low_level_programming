#include "main.h"

/**
 * print_last_digit - print the last digit
 * @i: is the argument to be passed in
 * Return:0 if successful
 */
int print_last_digit(int i)
{
	i = i % 10;
	if (i < 0)
		i = (-1)*i;
	_putchar(i + '0');
	return (i);
}
