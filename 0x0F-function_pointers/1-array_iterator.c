#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"



/**
 * array_iterator - iterates through array elements
 * @size: size of array
 * @array: pointer to array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size <= 0)
		return;
	if (array == NULL && action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
