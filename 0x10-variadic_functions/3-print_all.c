#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * printint - prints integer formated input
 * @ptr: input parameter from variadic function
 * Return: NULL
 */
void printint(va_list ptr)
{
	int j;

	j = va_arg(ptr, int);
	printf("%d", j);
}
/**
 * printchar - prints character formated input
 * @ptr: input parameter from variadic function
 * Return: NULL
 */
void printchar(va_list ptr)
{
	char ch;

	ch = va_arg(ptr, int);
	printf("%c", ch);
}
/**
 * printstr - prints string formated input
 * @ptr: input parameter from variadic function
 * Return: NULL
 */
void printstr(va_list ptr)
{
	char *str;

	str = va_arg(ptr, char *);
	printf("%s", str);
}
/**
 * printfloat - prints float formated input
 * @ptr: input parameter from variadic function
 * Return: NULL
 */
void printfloat(va_list ptr)
{
	float fl;

	fl = va_arg(ptr, double);
	printf("%f", fl);
}
/**
 * print_all - prints anything according to the input specified format
 *
 * @format:pointer to string of characters
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int n, m;
	char *delimeter;
	va_list ptr;


	/**
	 * struct form specifier - user defined structure
	 */
	struct form specifier[] = {
		{"i", printint},
		{"c", printchar},
		{"s", printstr},
		{"f", printfloat}
	};

	n = 0;
	delimeter = "";

	va_start(ptr, format);
	while (format != NULL && format[n / 4] != '\0')
	{
		m = n % 4;
		if (specifier[m].type[0] == format[n / 4])
		{
			printf("%s", delimeter);
			specifier[m].f(ptr);
			delimeter = ", ";
		}
		n++;
	}
	printf("\n");
}
