#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - is a function that frees memory
 * @d: is a structure of dog
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		d = NULL;
	}
}
