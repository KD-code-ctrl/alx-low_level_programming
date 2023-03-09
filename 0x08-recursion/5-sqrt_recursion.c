#include "main.h"
int sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - is a funtion that calls the sqrt_recursion function with
 * @n: is the integer value whos square root we want to find
 * Return: the square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_recursion(n, 1));
}

/**
 * sqrt_recursion - is a funtion that finds the square root with
 * the initial value 1 and n as arguments
 * if square of i = n then i is returned as the square root of n
 * if i is greater than n then -1 is returne signifying we
 * couldn't find square root
 * @n: is the integer value whos square root we want to find
 * @i: is sort of a counter we use to find the square root
 * Return: the square root of n
 */
int  sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_recursion(n, i + 1));
}
