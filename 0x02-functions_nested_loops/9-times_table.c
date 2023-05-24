#include <stdio.h>
#include "main.h"

/**
 * times_table - print 9 times table.
 *
 */
void times_table(void)
{
	int a, b, times;

	for(a = 0; a <= 9; a++)
	{
		_putchar('0');
		for (b = 1; b <= 9; b++)
		{
			_putchar(',');
			_putchar(' ');

			times = a * b;
			if (times > 9)
			{
				_putchar((times / 10) + '0');
				_putchar((times % 10 )+ '0');
			}
			else
			{
				_putchar(' ');
				_putchar(times + '0');
			}
		}
		_putchar('\n');
	}
}

