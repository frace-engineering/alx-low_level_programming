#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			int n;

			if (j > 9)
			{
				n = j / 10;
			}
			else
			{
				n = j;
			}
			_putchar(n + '0');
			if (j > 9)
			{
				_putchar((j % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
