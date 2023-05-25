#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit.
 *
 * @c: input
 *
 * Return: 1 if digit else 0.
 */
int _isdigit(int c)
{
	if ((0 <= c) || (c <= 9) || (48 <= c) || (c <= 57))
	{
		return (1);
	}

	return (0);
}
