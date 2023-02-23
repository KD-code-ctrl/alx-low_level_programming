#include "main.h"

/**
 * _isupper - check is a variable  upper
 * @i: is argument to be checked
 * Return:1 if upper and 0 if otherwise
 */
int _isupper(int i)
{
	if (i >= 65 && i <= 90)
		return (1);
	else
		return (0);
}
