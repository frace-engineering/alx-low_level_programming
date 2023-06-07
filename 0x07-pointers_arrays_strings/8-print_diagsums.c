#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * print_diagsums - prints the sum of 2 diagonals of a sqr matrix
 * @a: pointer to the matrix
 * @size: size of sqrmatrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum;

	sum = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = a[i] + a[j];
				sum += sum;
			}
		}
	}
}
