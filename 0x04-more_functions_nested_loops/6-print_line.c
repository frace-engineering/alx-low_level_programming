#include <stdio.h>
#include "main.h"

/**
 * print_line - prints horizontal line.
 * @n: number of times to print '_'.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{	
		_putchar('\n');
	}
	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
	return;
}
