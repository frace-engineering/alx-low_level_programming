#include <stdio.h>
#include "main.h"


/**
 * reverse_array - reverse the content of an integer array
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	temp = 0;
	n = n -1;
	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
