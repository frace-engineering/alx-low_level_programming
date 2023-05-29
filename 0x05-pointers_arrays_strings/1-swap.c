#include <stdio.h>
#include "main.h"


/**
 * swap_int - swaps two integers
 * @a: pointer to int
 * @b: pointer to second int
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
