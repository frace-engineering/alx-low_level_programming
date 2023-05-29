#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * puts_half - prints half of s atring
 * @str: pointer to string
 */
void puts_half(char *str)
{
	int i, j, string_len;

	i = 0;
	string_len = 0;
	while (str[i] != '\0')
	{
		string_len += 1;
		i++;
	}

	if (((string_len - 1) % 2) == 0)
	{
		for (j = (string_len - 1) / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	if (((string_len - 1) % 2) != 0)
	{
		for (j = (string_len) / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
