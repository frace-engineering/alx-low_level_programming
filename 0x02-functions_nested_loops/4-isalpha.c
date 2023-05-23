#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check if character is alphabet
 *
 * @c: input character
 * Return: 1 if alphabet else 0.
 */
int _isalpha(int c)
{
	if (((c <= 122) && (c >= 97)) || ((c <= 90) && (c >= 65)))
		return (1);
	return (0);
}
