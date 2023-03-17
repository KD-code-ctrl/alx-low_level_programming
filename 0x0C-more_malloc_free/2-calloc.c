#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - is a function that allocates memory for an array using calloc
 * @nmemb: represents elements
 * @size: is size in bytes for each element
 * Return: a pointer to the allocated memory if nmem or size == 0
 * NULL is returned or if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int  i;
	char *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < nmemb * size; i++)
	{
		arr[i] = 0;
	}
	return (arr);
}
