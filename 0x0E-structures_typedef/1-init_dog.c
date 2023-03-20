#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - is a function that intializes a variable of type struct dog
 * @d: is a structure that is linked to a pointer
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: void (nothing)
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
