#include "main.h"

/**
 * factorial - is function the that returns the factorial of
 * a number
 * @n: is the number we will be getting its factorial
 * Return: integer value
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
