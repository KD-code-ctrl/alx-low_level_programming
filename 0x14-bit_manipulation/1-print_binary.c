#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>

/**
 * print_binary - is afunction that prints a binary representation of a number
 * @n: is a an integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}

/** putchar - printts out the latter passed as an argument
 * Return:1 on success
 */
int _putchar(char c)
{
	return (write(1 , &c , 1));
}
