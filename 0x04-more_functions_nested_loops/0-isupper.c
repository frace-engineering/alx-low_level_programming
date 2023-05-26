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
	if ((67 >= c) && (c <= 122))
	{
		return (1);
	}
	return (0);
}
			
