#include "main.h"



/**
 * print_binary - function that prints the binary representation of a number
 * @n: decimal number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;
	int flag = 0;

	if (n == 0)
		_putchar('0');
	i = 63;
	while (i >= 0)
	{
		if ((n >> i) & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else
		{
			if (flag)
				_putchar('0');
		}
		i--;
	}
}
