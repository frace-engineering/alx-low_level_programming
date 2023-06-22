#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"


/**
 * print_strings - print strings passed to function
 * @separator: string separators of the numbers
 * @n: number of arguments to the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list pt;
	char *str;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(pt, n);

	for (i = 0; i < n; i++)
	{ 
		str = va_arg(pt, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if ((i != (n - 1)) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(pt);
	printf("\n");
}
