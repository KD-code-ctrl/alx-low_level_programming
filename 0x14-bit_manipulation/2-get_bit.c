#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_bit - is afunction that returns the value of a bit at a given index
 * @n: is the number
 * @index: is the index position we want to get
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask, x;

	if (index >=  sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	x = 1;
	mask = x << index;
	return ((n & mask) != 0);
}
