#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, len1, len2;
	char *arr;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	len1 = 0;
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	len2 = 0;
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	arr = malloc((len1 + len2) * sizeof(char));
	if (len1 > 0)
	{
		for (i = 0 ; i < len1 && s1[i] != '\0' ; i++)
		{
			arr[i] = s1[i];
		}
	}
	if (len2 > 0)
	{
		for (i = 0 ; i < len2 && s2[i] != '\0' ; i++)
		{
			arr[len1 + i] = s2[i];
		}
	}
	arr[len1 + len2] = '\0';
	return (arr);
}
