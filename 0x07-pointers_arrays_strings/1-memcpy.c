#include "main.h"

/**
 * _memcpy - its a function that copies memory area
 * @src: is a memory area
 * @dest: is the memory area we are going to copy to
 * @n: is the number of times we are going to copy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0;  i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
