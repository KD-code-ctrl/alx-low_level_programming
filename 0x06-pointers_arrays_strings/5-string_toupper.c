#include "main.h"

/**
 * string_toupper - is a function that converts a atring to upper case
 * @str: is a string pointer
 * Return: Uppercase string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0 ; i < str[i] ; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
