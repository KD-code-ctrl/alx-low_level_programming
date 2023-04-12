#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_binary - is afunction that prints a binary representation of a number
 * @n: is a an integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i, mask;
	mask = (unsigned long int)1 << (sizeof(n) * 8 - 1);

	for (i = 0; i < (sizeof(n) * 8); i++)
	{
		_putchar((n & mask) ? '1' : '0');
		mask >>= 1;
	}
	_putchar('\n');
}

