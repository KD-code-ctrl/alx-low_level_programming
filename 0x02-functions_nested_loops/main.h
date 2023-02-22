#include <unistd.h>

/**
 * _putchar - writes out a character passed in as argument
 * Return:1 on success
 */
int _putchar(char c)
{
	return (write(1 , &c , 1));
}
