#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * puts2 - prints every other character of a string
 * @str: pointer to a string.
 */
void puts2(char *str)
{
	int i, j;
	int string_len;

	string_len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		string_len += 1;
		i++;
	}
	for (j = 0; j < string_len; j++)
	{
		if ((j % 2) == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
