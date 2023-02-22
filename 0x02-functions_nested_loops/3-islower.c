#include "main.h"

/**
 * islower - checks if argument is lowercase
 * Return:1 if its TRUE
 * Return:0 if its FALSE
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
