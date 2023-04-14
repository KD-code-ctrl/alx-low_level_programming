#include "main.h"
#include <stdio.h>

/**
 * flip_bits -  a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: is an integer
 * @m: is an integer
 * Return: number of bits needed to be fipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, x;
	unsigned int count = 0;

	diff =  n ^ m;
	x = 1;
	while (diff !=  0)
	{
		count += diff & x;
		diff = diff >> 1;
	}
	return (count);
}
