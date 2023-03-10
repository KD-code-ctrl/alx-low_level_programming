#include "main.h"

/**
 * _strncat - is a function that concatenates two strings
 * @src: pointer variable to a string
 * @dest: is a pointer variable to a string
 * @n: is an integer variable that will serve as a counter
 * Return: Concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int count, length_of_dest;

	length_of_dest = 0;
	while (dest[length_of_dest] != '\0')
	{
		length_of_dest++;
	}
	for (count = 0 ; count < n && src[count] ; count++)
	{
		dest[length_of_dest + count] = src[count];
	}
	dest[length_of_dest + count] = '\0';
	return (dest);
}
