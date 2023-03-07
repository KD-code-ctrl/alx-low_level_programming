#include "main.h"

/**
 * _strpbrk -  a function that searches a string for any of a set of bytes
 * @s: is the string to be searched through
 * @accept: is the string we will be searching for
 * Return: the first occurence of accept in string s if not found NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x, max;

	max = 0;
	while (s[max])
	{
		max++;
	}
	for (i = 0 ; i < max ; i++)
	{
		for (x = 0 ; accept[x] != '\0' ; x++)
		{
			if (accept[x] == s[i])
			{
				s += i;
				return (s);
			}
		}
	}
	return ('\0');
	_putchar ('\n');
}
