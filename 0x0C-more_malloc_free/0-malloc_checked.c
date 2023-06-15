#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * malloc_checked - alloctes memory using malloc
 * and check if malloc fail, exit normal with value 98
 * @b: integer
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(sizeof(*ptr) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
