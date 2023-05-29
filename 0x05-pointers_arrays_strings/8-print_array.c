#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * print_array - prints n number of elements in am array
 * @a: pointer to array
 * @n: number of elements to be printed
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("%d", a[i]);
	printf("\n");
}
