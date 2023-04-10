#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  binary_to_uint - is a function that converts binary to integer
 *  @b: is a pointer to string that  has binary
 *  Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len, sum;

	len = strlen(b);
	i = 0;
	sum = 0;
	while (i < len)
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			return (0);
		}
		else if (b[i] >= 'A' && b[i] <= 'Z')
		{
			return (0);
		}
		i++;
	}
	for (i = 0; i < len ; i++)
	{
		sum += (b[len - i - 1] - '0') * _pow(2, i);
	}
	return (sum);
}

/**
 * _pow - is a function that return a power of a number
 * @base: is the the base
 * @exponent: is the exponent
 * Return: the result of base to the power of exponent
 */
int _pow(int base, int exponent)
{
	int result = 1;
	int i;

	if (exponent < 0)
	{
		base = 1 / base;
		exponent = -exponent;
	}
	for (i = 0; i < exponent; i++)
	{
		result *= base;
	}
	return (result);
}
