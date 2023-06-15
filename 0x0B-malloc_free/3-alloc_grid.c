#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * alloc_grid - returns a pointer to a 2 dimentional array of integers
 * @width: array width
 * @height: Array height
 *
 * Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(*ptr) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(*ptr[i]) * width);
		if (ptr[i])
		{
			for (j = 0; j < height; j++)
			{
				ptr[i][j] = 0;
			}
		}
		else
		{
			free(ptr[i]);
			return (NULL);
		}
	}
	return (ptr);
}
