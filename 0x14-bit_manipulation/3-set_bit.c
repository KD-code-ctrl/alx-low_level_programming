#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * set_bit - is a function that sets the value of a bit to 1 at a given index
 * @n: is the number
 * @index: is the index position we want to get
 * Return: 1 if passed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask, x;

	if (index >=  (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	x = 1;
	mask = x << index;
	*n |= mask;
	return (1);
}
