#include "main.h"

/**
 * _pow_recursion - is a function that returns base to the power of exponent
 * @x: is the base value
 * @y: is the ecponetial value
 * Return: integer value of the calculation
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
