#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct form - user defined structure
 * @type: first member
 * @f: function pointer
 */
struct form
{
	char *type;
	void(*f)(va_list);
};

void printstr(va_list ptr);
void printchar(va_list ptr);
void printfloat(va_list ptr);
void printint(va_list ptr);
#endif /* VARIADIC_FUNCTION_H */
