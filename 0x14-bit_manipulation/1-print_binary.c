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
	if (n == 0)
	{
		printf("0");
		return;
	}
	if ((signed long int)n < 0)
	{
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
