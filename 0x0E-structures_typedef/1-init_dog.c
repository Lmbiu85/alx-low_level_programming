#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function to initialize dog structure
 * @d: a pointer towards the dog structure to be initialized
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the doig
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
