#include "main.h"

/**
 * print_numbers - prints numbers up to a range
 * Return:0 when successful
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
		_putchar((i % 10) + '0');
	_putchar('\n');
}
