#include <stdio.h>
#include <stdlib.h>
#include "main.h"



/**
 * _calloc - allocates memory for an array using calloc
 * @:nmemb: array members
 * @size: size of the array
 * Return: pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	int *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr = malloc(sizeof(int) * nmemb);
		if (ptr == NULL)
		{
			return (NULL);
		}
	}
	return (ptr);
}
