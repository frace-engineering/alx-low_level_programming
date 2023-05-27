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
		return;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			_putchar(' ');
		}
		for (j = n; j >= n; j--)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
