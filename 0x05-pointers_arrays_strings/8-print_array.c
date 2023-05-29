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

	if (n <= 0)
	{
		return;
	}
	i = 0;
	while (i < n - 1)
	{
		if (a[i] != ' ')
		{
			printf("%d, ", a[i]);
		}
		i++;
	}
	printf("%d", a[i]);
	printf("\n");
}
