#include "main.h"
#include <stdlib.h>

/**
 * _strdup - is a function that returns a pointer to a newly allocated
 * space in memory which contains a copy of the string given as a parameter
 * @str: is pointer to a string
 * Return: the duplicated string
 */
char *_strdup(char *str)
{
	int i, max;
	char *arr;

	if (str == NULL)
	{
		return (NULL);
	}
	max = 0;
	while (str[max] != '\0')
	{
		max++;
	}
	arr = malloc((max + 1) * 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < max + 1 ; i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
