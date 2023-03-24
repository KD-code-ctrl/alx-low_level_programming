#ifndef VARIADIC_FUNCTION_H
#define VARIADIC_FUNCTION_H
#include <stdarg.h>
/**
 * struct print - is a structure
 * @type: is a pointer to data type
 * @func: is a pointer to a function that prints
 */
typedef struct print
{
	char *type;
	void (*func)(va_list arg);
} printer;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
