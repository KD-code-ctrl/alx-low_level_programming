#include "main.h"

/**
 * _strstr - is a function that locates a substring
 * @haystack: is the string we will be searching through
 * @needle: is the substring we will be searching for
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, max;

	max = 0;
	while (haystack[max])
	{
		max++;
	}
	for (i = 0 ; i <= max ; i++)
	{
		for (x = 0; needle[x] ; x++)
		{
			if (*needle == haystack[i])
			{
				haystack += i;
				return (haystack);
			}
		}
	}
	return ('\0');
}
