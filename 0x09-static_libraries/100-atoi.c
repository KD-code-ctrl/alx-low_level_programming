#include "main.h"

/**
 * _atoi - is a function that converts a string to integer
 * @s: pointer variable to the string
 * Return: the integer when successful 0 when null
 */
int _atoi(char *s)
{
	int max, count, num;

	max = 0;
	num = 0;
	while(s[max] != '\0')
	{
		max++;
	}
	for (count = 0 ; count < max ; count++)
		if (s[count] >= 48 && s[count] <= 57)
		{
			num += num * 10 + (s[count] - 48);
		}
		else
			continue;
	if (num == 0)
		return(0);
	else
		return (num);
}

	
