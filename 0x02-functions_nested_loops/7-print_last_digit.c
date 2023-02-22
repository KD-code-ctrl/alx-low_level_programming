#include "main.h"

/**
 * print_last_digit - print the last digit
 * @i: is the argument to be passed in
 * Return:0 if successful
 */
int print_last_digit(int i)
{
	int last_nr = i % 10;

	if (last_nr < 0)
		last_nr = (-1) * last_nr;
	_putchar(last_nr + '0');
	return (last_nr);
}
