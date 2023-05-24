#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers from input number to 98
 *
 * @n: input number.
 */
void print_to_98(int n)
{
	if (n <= 0)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", 98);
	}
	else if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", 98);
	}
	else if (n == 98)
		printf("%d", 98);
	printf("\n");
}
