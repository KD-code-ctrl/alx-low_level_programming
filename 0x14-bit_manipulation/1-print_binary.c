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
	unsigned long int base;

	if (n == 0)
	{
		printf("0");
		return;
	}
	if ((signed long int)n < 0)
	{
		return;
	}
	base = 1;
	while (base <= n)
	{
		base <<= 1;
	}
	base >>= 1;
	while (base > 0)
	{
		if (n & base)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		base >>= 1;
	}
}
