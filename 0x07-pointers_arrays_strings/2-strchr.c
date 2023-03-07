#include "main.h"

/**
 * _strchr - its a functiom that locates a character in a string
 * @s: is a pointer to a string
 * @c: is the character we will be searching for
 * Return: a pointer to the first  occurence of the string or
 * Null if not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] && str[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}
