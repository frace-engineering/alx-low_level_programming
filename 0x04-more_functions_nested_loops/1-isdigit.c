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
	if (((c <= 0) && (c <= 9)) || ((c <= 48) && (c <= 57)))
	{
		return (1);
	}

	return (0);
}
