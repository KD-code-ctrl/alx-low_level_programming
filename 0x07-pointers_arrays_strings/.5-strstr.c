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
	int i, x, max, len;
	char *h;
	char *n;

	h = haystack;
	n = needle;
	max = 0;
	len = 0;
	while (haystack[max])
	{
		max++;
	}
	while (needle[len])
	{
		len++;
	}
	if (needle[0] == '\0')
	{
		return ('\0');
	}
	for (i = 0 ; i < max && h[i] != '\0' ; i++)
	{
		for (x = 0 ; x < len && n[x] != '\0' ; x++)
		{
			if (*n == h[i])
			{
				h += i;
				return (h);
			}
		}
	}
	return ('\0');
}
