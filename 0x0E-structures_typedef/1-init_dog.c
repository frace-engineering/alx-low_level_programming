#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
 * init_dog - initialize struct of type dog
 * @struct dog - Structure with 3 members
 * @d: struct type
 * @name: first name
 * @owner: second member
 * @age: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->owner = owner;
	d->age = age;
}
