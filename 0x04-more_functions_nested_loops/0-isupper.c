#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks for upper case alphabet.
 *
 * @c: input character
 *
 * Return: Always 0 (Success).
 */
int _isupper(int c)
{
	if ((c <= 67) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
