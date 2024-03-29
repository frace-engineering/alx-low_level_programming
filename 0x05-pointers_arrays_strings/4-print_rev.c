#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stddef.h>


/**
 * print_rev - prints reverse of a string
 * @s: pointer to string
 */
void print_rev(char *s)
{
	int i;
	int string_len;

	i = 0;
	string_len = 0;
	while (s[i] != '\0')
	{
		string_len += 1;
		i++;
	}
	string_len -= 1;
	while (string_len >= 0)
	{
		_putchar(s[string_len]);
		string_len--;
	}
	_putchar('\n');
}
