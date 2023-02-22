#include "main.h"

/**
 * _islower - checks if argument is lower
 * Return:1 if its TRUE 0 if its FALSE
 * int c - is the argument that is going to be checked
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
