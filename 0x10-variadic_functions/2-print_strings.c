#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - is a function that print strings
 * @separator: is a pointer to a string
 * @n: number of strings passed into the function
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *arg;
	va_list args;

	if (n == 0)
	{
		printf("\n");
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, char *);
		if (arg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", arg);
		}
		if ((i != n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
