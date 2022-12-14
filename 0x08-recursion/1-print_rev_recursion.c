#include "main.h"

/**
 * _print_rev_recursion - prints string in reverse flow
 * @s: string to work on.
 * Return void
 */

void _print_rev_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(*(s - 1));
		s--;
		_print_rev_recursion(s);
	}
	_putchar('\n');
}
