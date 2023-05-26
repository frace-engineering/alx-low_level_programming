#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: number of strokes.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		for (j = n; j >= n; j--)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
}
