#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - is a functiont that concatenates two strings
 * @s1: is a string pointer
 * @s2: is a string pointer
 * @n: is an unsigned integer
 * Return: a pointer  to the new concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	unsigned int i, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0' && len2 < n)
	{
		len2++;
	}
	if (n >= len1)
		n = len2;

	arr = malloc((len1 + n + 1) * sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		arr[i] = s1[i];
	}
	for (i = 0; i <= n; i++)
	{
		arr[len1 + i] = s2[i];
	}
	arr[len1 + len2] = '\0';
	return (arr);
}
