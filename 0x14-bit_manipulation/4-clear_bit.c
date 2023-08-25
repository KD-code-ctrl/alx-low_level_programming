#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * clear_bit - is a function that set a value of a  bit to 0 at given position
 * @n: is the number
 * @index: is the index or position
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, x;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	x = 1;
	mask = ~(x << index);
	*n &= mask;
	return (1);
}
