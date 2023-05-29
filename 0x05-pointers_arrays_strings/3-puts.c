#include <stdio.h>
#include "main.h"
#include <string.h>


/**
 * _puts - prints a string folloewd by anew line
 * @str: pointer to string
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
