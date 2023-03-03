#include "main.h"

/**
 * cap_string - is a function that capitalizes evry word in the string
 * @str: is a pointer variable to a string
 * Return: the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[1] <= 'a' && str[1] >= 'z')
		{
			str[1] = str[1] - 32;
		}
		if (!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
			if (str[i] == 32 || str[i] == '\t' || str[i] == '\n' || str[i] == ';'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"' || str[i] == '(' ||
			str[i] == ')' || str[i] == '{' || str[i] == '}' || str[i] == 46 ||
			str[i] == 44)
			{
				i++;
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			else
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
		}
		else
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
			{
				str[i] = str[i] + 32;
			}
		}
	}
	return (str);
}
