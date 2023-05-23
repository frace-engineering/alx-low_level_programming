#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit os a number
 *
 * @number: input number
 * Return: Always 0
 */
int print_last_digit(int number)
{
	int lastdigit;

	lastdigit = number % 10;
	if (lastdigit < 0)
		lastdigit = (lastdigit * -1);
	_putchar(lastdigit + '0');
	return (0);
}

