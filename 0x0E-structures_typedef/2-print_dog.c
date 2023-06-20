#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


/**
 * print_dog - prints a struct dog
 * @d: pointer to struct of type dog
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("Name: %s", d->name);
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->owner == NULL)
		printf("Owner: %s", d->owner);
	else
	{
		printf("Owner: %s\n", d->owner);
	}
	printf("Age: %1f\n", d->age);
}

