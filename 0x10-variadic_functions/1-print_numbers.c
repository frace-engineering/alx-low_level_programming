#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_numbers - print numbers passed to function
 * @separator: string separators of the numbers
 * @n: number of arguments to the function
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pt;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pt, int));
		if (i != n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pt);
	printf("\n");
}
