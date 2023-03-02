#include "main.h"

/**
 * cap_string - is a function that capitalizes evry word in the string
 * @s: is a pointer variable to a string
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0' ; i++)
	{
		if (s[i] == 0)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		if (s[i] == ' ')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = s[i] - 32;
			}
		}
		else
		{
			if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = s[i] + 32;
			}
		}
	}
	return (s);
}
