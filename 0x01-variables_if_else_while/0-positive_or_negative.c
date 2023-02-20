#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print a number which is either positive,negative or zero
 * Return:0 if function successful
 */
int main(void)
{
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%d is positive", n);
	else if (n == 0)
		printf("%d is zero", n);
	else
		printf("%d is negative", n);
	return (0);
}
