#include "main.h"

/**
 * _memset - function fills the first n bytes of the memory area pointed to by
 * s with the constant byte b
 *  @n: is number of blocks to be replaced
 *  @b: is the charcter to be inserted
 *  @s: is the pointer to the string
 *  Return: s modified
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}
