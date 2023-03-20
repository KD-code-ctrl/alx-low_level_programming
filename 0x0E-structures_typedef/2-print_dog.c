#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - is a function that prints a struct dog
 * @d: is the pointer to structure dog
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0.0)
		{
			printf("Age: %d\n", 0);
		}
		else
		{
			printf("Age: %.1f\n", d->age);
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
