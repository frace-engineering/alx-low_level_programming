#include <stdio.h>
#include <stdlib.h>
#include "dog.h"



/**
 * free_dog - frees malloc'ed memory for dog
 * @d: - typedef for struct dog
 * Return: NULL
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
