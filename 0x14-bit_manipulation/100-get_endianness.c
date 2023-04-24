#include "main.h"

/**
 * get_endianness - is a function that checks the endianness
 *
 * Return: 0 if big endian 1 if littlel endian
 */
int get_endianness(void)
{
	int x = 1;

	char *c = (char *)&x;

	return (*c == 1);
}
