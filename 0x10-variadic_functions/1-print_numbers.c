#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - is a function that prints numbers
 * @separator: is a pointer to a character
 * @n: is the number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list args;

	if (n == 0)
	{
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
		if (i != n -1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	va_end(args);
	printf("\n");
}
