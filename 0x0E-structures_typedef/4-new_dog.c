#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
#include <string.h>


/**
 * new_dog - creates a new dog struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: pointer to new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = malloc(sizeof(name) + 1);
	if (new_dog->name == NULL)
	{
		free(new_dog->name);
		return (NULL);
	}
	strcpy(new_dog->name, name);

	new_dog->owner = malloc(sizeof(owner) + 1);
	if (new_dog->owner == NULL)
	{
		free(new_dog->owner);
		return (NULL);
	}
	strcpy(new_dog->owner, owner);


	new_dog->age = age;

	return (new_dog);
}
