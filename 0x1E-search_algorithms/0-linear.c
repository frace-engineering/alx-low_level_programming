#include "search_algos.h"
#include <stdlib.h>
/**
 * linear_search - searches for a value in an array
 * using Linear search algorithm
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: value to be searched for.
 *
 * Return: Index of the value if found else return -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL && i < size)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] != value)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
			}
			else
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				return (i);
			}
		}
	}
	return (-1);
}
