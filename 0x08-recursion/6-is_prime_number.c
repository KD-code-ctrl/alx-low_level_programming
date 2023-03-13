#include "main.h"
int _prime_helper(int n,int i);
/**
 * is_prime_number - is a function that checks if a number is a prime number
 * @n: is number to be checked
 * Return: 1 if true and  0 if false
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	else
		return (_prime_helper(n, 3));
}
/**
 *
 * _prime_helper - is a helper function to check fif n is divisible
 * @n: is the number to be checked
 * @i: is the devisor
 * Return: 1 if true and 0 if false
 */
int _prime_helper(int n,int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if ((n % i) == 0)
	{
		return (0);
	}
	else
		return (_prime_helper(n, i+2));
}
