#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"



/**
 * int_index - searches for integer in an array
 * @array: pointer to array elements
 * @size: size of array
 * @cmp: function pointer
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(*array) == 0)
			return (i);
	}
	return (0);
}
