#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
int _strlen(char *s);
char *_strcpy(char *dest, char *src);

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
	nw_dog->name = malloc(_strlen(name) + 1);
	if (nw_dog->name == NULL)
	{
		free(nw_dog);
		return (NULL);
	}
	nw_dog->owner = malloc(_strlen(owner) + 1);
	if (nw_dog->owner == NULL)
	{
		free(nw_dog);
		free(nw_dog->name);
		return (NULL);
	}
	nw_dog->name = _strcpy(nw_dog->name, name);
	nw_dog->age = age;
	nw_dog->owner = _strcpy(nw_dog->owner, owner);
	return (nw_dog);
}

/**
 * _strlen - is a function that gets the string length
 * @s: is the string
 * Return: length of string;
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
 * _strcpy - is a function that copys a string into another
 * @dest: is the string to be copied into
 * @src: is the string to copy from
 * Return: pointer to the new string
 */
char *_strcpy(char *dest, char *src)
{
	int max, count;

	max = _strlen(src);
	for (count = 0; count < max && src[count] != '\0' ; count++)
	{
		dest[count] = src[count];
	}
	dest[count] = '\0';
	return (dest);
}
