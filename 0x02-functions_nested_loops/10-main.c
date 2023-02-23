#include "main.h"
#include <stdio.h>

/**
 * main - calls function add and print the result
 * Return:0 always
 */
int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}
