#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - is a function that returns the sum of its arguments
 * @n: is an integer variable that defines n arguments
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list args;

	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
