#include "main.h"
#include <unistd.h>

/**
 * _putchar - printts out the latter passed as an argument
 * @c: is the charcter argument
 * Return:1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
