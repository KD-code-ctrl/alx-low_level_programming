#include "main.h"

/**
 * cap_string - is a function that capitalizes evry word in the string
 * @string: is a pointer variable to a string
 * Return: the capitalized string
 */
char *cap_string(char *string)
{
	int i;

	while (string[i] != '\0')
	{
		if (i == 0 || string[i - 1] == ' ' || string[i - 1] == '\t' ||
		string[i - 1] == '\n' || string[i - 1] == ',' || string[i - 1] == ';' ||
		string[i - 1] == '.' || string[i - 1] == '!' || string[i - 1] == '?' ||
		string[i - 1] == '"' || string[i - 1] == '(' || string[i - 1] == ')' ||
		string[i - 1] == '{' || string[i - 1] == '}')
		{
			if (string[i] >= 'a' && string[i] <= 'z')
			{
				string[i] = string[i] - 32;
			}
		}
		else
		{
			if (string[i] >= 'A' && string[i] <= 'Z')
			{
				string[i] = string[i] + 32;
			}
		}
		i++;
	}
	return (string);
}
