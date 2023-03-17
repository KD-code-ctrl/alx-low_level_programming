#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - is a function that allocates memory using malloc
 * @b: is an usigned integer
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int **ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
