#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * new_dog - creates a new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t new_dog;
	char *ptr;

	ptr = malloc(sizeof(dog_t) + 1);
	if (ptr == NULL)
		return (NULL);
	ptr->name = name;
	ptr->owner = owner;

	return (ptr);
}
