#include "main.h"
#include <stdio.h>

/**
 * main - Has a function that changes the value of n
 * Return:0 always
 */
int main(void)
{
       	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
