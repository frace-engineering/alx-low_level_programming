#include <stdio.h>
#include <stdlib.h>
#include "main.h"



/**
 * array_range - creates an array of integers
 * @min: lower range
 * @max: higher range
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(int) * (max - min + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
