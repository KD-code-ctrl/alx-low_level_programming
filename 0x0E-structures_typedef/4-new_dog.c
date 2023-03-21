#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - is a function that creates a new dog
 * @name: is the name of the dog
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 * Return: the stored copy of struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nw_dog;

	nw_dog = malloc(sizeof(dog_t));
	if (nw_dog == NULL)
	{
		return (NULL);
	}
	nw_dog->name = name;
	nw_dog->age = age;
	nw_dog->owner = owner;
	return (nw_dog);
}
