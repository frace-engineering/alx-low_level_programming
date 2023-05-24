#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: Always 0.
 */
void jack_bauer(void)
{
	int a;
	int b;
	int c;
	int d;

	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 10; b++)
		{
			for (c = 0; c < 6; c++)
			{
				for (d = 0; d < 10; d++)
				{
					_putchar(a + '0');
					_putchar(b + '0');
					_putchar(':');
					_putchar(c + '0');
					_putchar(d + '0');
					_putchar('\n');
					if (a == 2 && b == 3 && c == 5 && d == 9)
						return;
				}
			}
		}
	}
}
