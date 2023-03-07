#include "main.h"

/**
 * _strspn - is a function that gets the length of a prefix substring
 * @s: pointer to the string
 * @accept: is the string to be searched for
 * Return: n bytes of accept found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x, len, max, total;

	max = 0;
	total = 0;
	len = 0;

	while (s[max])
	{
		max++;
	}
	while (accept[total])
	{
		total++;
	}
	if (accept[0] == '\0')
	{
		return (len);
	}
	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (s[i] == accept[x])
			{
				len++;
				break;
			}
		}
		if (s[i] !=  accept[x])
		{
			break;
		}
	}
	return (len);
}
