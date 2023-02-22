#include "main.h"

/**
 * _isalpha - checks if argument is upper
 * @c: is the argument that is going to be checked
 * Return:1 if its TRUE 0 if its FALSE
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
