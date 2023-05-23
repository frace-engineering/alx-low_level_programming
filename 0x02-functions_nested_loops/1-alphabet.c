#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alphabets from a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;

	}
	_putchar('\n');
}
