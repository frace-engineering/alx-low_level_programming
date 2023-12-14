#include "search_algos.h"
/**
 * binary_search - Search through an array usinf binary search algorithm
 * @array: pointer to an array
 * @size: size of the array
 * @value: elment to be searched for
 *
 * Return: index of the element else return -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low, mid, high, i;

	if (array == NULL)
	{
		return (-1);
	}
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
