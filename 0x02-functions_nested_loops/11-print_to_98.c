#include "main.h"

/**
 * print_to_98 - print all natural numbers up_to 98
 * n: is the value we going to start from
 * Return:0 when successful
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		if (n == 98)
			_putchar(n + '0');
		for (num = n ; num <= 98 ; num++)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (num = n ; num >= 98 ; num--)
		{
			_putchar(num + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
}
