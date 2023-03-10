#include "main.h"
#include <unistd.h>

/** putchar - printts out the latter passed as an argument
 * Return:1 on success
 */
int _putchar(char c)
{
	return (write(1 , &c , 1));
}
