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

	if (b == NULL)
	{
		return (0);
	}
	len = _strlen(b);
	if (len == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < len ; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			sum = (sum << 1) + (b[i] - '0');
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
/**
 * _strlen - prints the length of a string
 * @s: is a pointer variable to the string
 * Return:0 when successful
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
