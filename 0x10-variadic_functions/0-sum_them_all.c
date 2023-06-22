#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"



/**
 * sum_them_all - returns the sum of all the parameters
 * @n: integer number
 * Return: return the sum of the args
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
        int sum;
       
	if (n == 0)
	{
		return (0);
	}

	sum = 0;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);

	return (sum);
}
