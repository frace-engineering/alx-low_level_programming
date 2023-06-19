#include <stdio.h>
#include "dog.h"


/*
 * init_dog - initialize struct of type dog
 * @d: struct type
 * @name: name
 * @age: age
 * @owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
