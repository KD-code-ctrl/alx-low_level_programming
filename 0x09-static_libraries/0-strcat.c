#include "main.h"

/**
 * _strcat - is a function that concatenates two strings
 * @src: pointer variable to a string
 * @dest: is a pointer variable to a string
 * Return: Concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int max, count, length_of_dest;

	max = 0;
	while (src[max] != '\0')
	{
		max++;
	}
	length_of_dest = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	for (count = 0 ; count < max && src[count] != '\0' ; count++)
	{
		dest[length_of_dest + count] = src[count];
	}
	dest[length_of_dest + count] = '\0';
	return (dest);
}
