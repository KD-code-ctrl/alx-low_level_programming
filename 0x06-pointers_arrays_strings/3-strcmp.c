#include "main.h"

/**
 * _strcmp - the function compares two strings
 * @s1: is a pointer variable to a string
 * @s2: is a pointer variable to a string to be compared
 * Return: a positive or negative or 0
 */
int _strcmp(char *s1, char *s2)
{

	int len_s1, len_s2, longer, i, diff;

	len_s1 = 0;
	len_s2 = 0;
	longer = 0;
	diff = 0;
	while (s1[len_s1] != '\0')
	{
		len_s1++;
	}
	while (s2[len_s2] != '\0')
	{
		len_s2++;
	}
	if (len_s1 > len_s2)
	{
		longer = len_s1;
	}
	else if (len_s2 > len_s1)
	{
		longer = len_s2;
	}
	else
	{
		longer = len_s1;
	}
	for (i = 0; i < longer && s1[i] != '\0' ; i++)
	{
		if (s1[i] > s2[i])
		{
			diff = s1[i] - s2[i];
		}
		else if (s1[i] < s2[i])
		{
			diff = s1[i] - s2[i];
		}
		return (diff);
	}
	return (0);
}
