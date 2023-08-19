#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *  binary_to_uint - is a function that converts binary to integer
 *  @string: is a pointer to string that  has binary
 *  Return: the converted number
 */

unsigned int binary_to_uint(const char *string)
{
	int i = 0;
	int str_len = strlen(string);
	int power = 1;
	int sum = 0;

	if (str_len == 0)
	{
		return (0);
	}
	for (i = str_len - 1; i >= 0; i--)
	{
		if (string[i] == '1')
		{
			sum += power;
		}
		power = 2 * power;
	}
	return (sum);
}
