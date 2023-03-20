#ifndef DOG_H
#define DOG_H

/**
 * struct dog - is a structure with multiple elements
 * @name: is the name of the dog
 * @age: is the dods age
 * @owner: is the owners name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
