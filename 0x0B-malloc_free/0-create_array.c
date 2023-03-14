#include "main.h"
#include <stdlib.h>

/**
 * create_array - is a function that creates an array of chars
 * and initializes it with a specific char
 * @size: size is an integer value that will determine the
 * size of the array
 * @c: is a character
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
	{
		return ('\0');
	}
	else
	{
		arr = malloc(size * 1);
		arr[0] = c;
		for (i = 1 ; i < size ; i++)
		{
			arr[i] = c;
		}
		return (arr);
	}
}
