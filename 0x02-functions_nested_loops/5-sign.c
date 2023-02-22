#include "main.h"
/**
 * print_sign - print the sign of a number
 * @n: is an intger argument passed inside th function
 * Return:1 if n is greater and 0 if == 0 and -1 if < 0
 */
int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
