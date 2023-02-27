#include "main.h"

/**
 * swap_int - swaps to integers around
 * @a: is pointer variable
 * @b: is a pointer variable
 * Return:0  when successful
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
