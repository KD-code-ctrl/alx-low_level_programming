#include "main.h"

/**
 * _strncpy - is a function that concatenates two strings
 * @src: pointer variable to a string
 * @dest: is a pointer variable to an array
 * @n: is an integer variable that will serve as a counter
 * Return: Copied  string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter;

	for (counter = 0 ; counter < n && src[counter] ; counter++)
	{
		dest[counter] = src[counter];
	}
	for ( ; counter < n ; counter++)
	{
		dest[counter] = '\0';
	}
	return (dest);
}
