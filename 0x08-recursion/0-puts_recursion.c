#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints string recursively followed by a new line
 * @s: pointer to string.
 * Return: void.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
		_putchar('\n');
}
