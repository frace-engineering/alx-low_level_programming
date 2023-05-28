#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints triangle.
 *
 * @size: size of the triangle.
 */
void print_triangle(int size)
{
	int i, j, dif;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < size; i++)
	{
		dif = size - i;
		for (j = 1; j <= size; j++)
		{
			if (j >= dif)
			{
				_putchar('#');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
