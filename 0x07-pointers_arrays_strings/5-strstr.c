#include "main.h"

/**
 * _strstr - is a function that locates a substring
 * @haystack: is the string we wil be searching through
 * @needle: is the substring we will be looking for
 * Return: a pointer to the beginning of the located
 * substring or Null if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, x, max, len, found;
	char *h, *n;

	max = 0;
	len = 0;
	found = 0;
	while (haystack[max])
	{
		max++;
	}
	while (needle[len])
	{
		len++;
	}
	if (*needle == '\0')
	{
		return (haystack);
	}
	for (h = haystack, i = 0 ; i < max && h[i] != '\0' ; i++)
	{
		for (n = needle, x = 0 ; x < len && n[x] != '\0' ; x++)
		{
			if (n[x] == h[i])
			{
				found++;
			}
			else if (needle[x] == '\0')
			{
				return (haystack);
			}
		}
		if (found == len)
		{
			h += i;
			return (h);
		}
	}
	return ('\0');
}
