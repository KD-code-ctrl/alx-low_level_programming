#include "main.h"

/**
 * _isdigit - checks if a variable is a digit 
 * @c: is the argument passed in the function
 * Return:1 if true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
