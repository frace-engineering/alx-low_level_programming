#include "main.h"



/**
 * print_binary - prints the binary representation of a number
 * @n: input number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, status;
	unsigned long int binary;

	status = 0;
	for (i = 63; i >= 0; i--)
	{
		binary = n >> i;
		if (binary & 1)
		{
			status = 1;
			_putchar('1');
		}
		else if (status == 1)
		{
			_putchar('0');
		}
	}
	if (!status)
		_putchar('0');
}
