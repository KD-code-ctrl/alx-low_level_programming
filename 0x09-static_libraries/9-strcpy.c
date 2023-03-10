#include "main.h"

/**
 * _strcpy - copies a string to another empty char variable
 * @dest: is a pointer variable it points to a buffer
 * @src: is a pointer variable that has the string to be copied
 * Return: the new copy of string
 */
char *_strcpy(char *dest, char *src)
{
	int max, count;

	max = 0;
	while (src[max] != '\0')
	{
		max++;
	}
	for (count = 0 ; count < max && src[count] != '\0' ; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
