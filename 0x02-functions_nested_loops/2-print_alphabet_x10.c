#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower case alphabets from a to z
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	i = 0;
	while (i < 10)
	{	
		alpha = 'a';
		while (alpha < 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		i++;
	}
}
