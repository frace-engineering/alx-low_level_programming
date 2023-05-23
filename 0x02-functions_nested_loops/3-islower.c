#include <stdio.h>
#include "main.h"

/**
 * _islower - check for lowercase.
 *
 * Return: 1 if lower else 0.
 */
int _islower(int c)
{
	if ((c <= 122) && (c >= 97))
		return (1);
	return (0);
}
