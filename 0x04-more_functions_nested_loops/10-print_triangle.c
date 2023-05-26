#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle.
 *
 */
void print_triangle(void)
{
	int i, j;
	int size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar(' ');

		}
		for (j = i; j <= size - i; j++)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
