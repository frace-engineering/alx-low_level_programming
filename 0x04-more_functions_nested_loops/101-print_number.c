#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: input number
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i;

	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	else if (i == n)
	{
		i = n;
	}
	if (i > 10)
	{
		_putchar((i / 10) + '0');
	}
	_putchar((i % 10) + '0');
}
