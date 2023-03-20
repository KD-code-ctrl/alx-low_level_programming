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
	if (d == NULL)
	{
		printf(" ");
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		if (d->age == 0.0)
		{
			printf("Age: (nil)\n");
		}
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %.1f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
	}
}
