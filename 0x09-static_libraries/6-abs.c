#include "main.h"

/**
 * _abs - print the absolute value of integer;
 * @a: is the number to be checked
 * Return:0 if successful
 */
int _abs(int a)
{
	if (a <= 0)
	{
		a = (-1) * a;
		return (a);
	}
	else
		return (a);
}
