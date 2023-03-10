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
	if (*needle == '\0')
	{
		return (haystack);
	}
	if (*haystack == '\0')
	{
		return ('\0');
	}
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
