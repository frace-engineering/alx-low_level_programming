#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print 9 times table.
 *
 * @n: input number.
 */
void print_times_table(int n)
{
	int a, b, times;

	if (n > 15 || n < 0)
		return;
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				_putchar(',');
				_putchar(' ');

				times = a * b;
				if (times >= 100)
				{
					_putchar((times / 100) + '0');
					_putchar(((times % 100) / 10) + '0');
					_putchar(((times % 100) % 10) + '0');
				}
				else if (times >= 10)
				{
					_putchar(' ');
					_putchar((times / 10) + '0');
					_putchar((times % 10) + '0');
				}
				else if (times < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(times + '0');
				}
			}
			_putchar('\n');
		}
	}
}

