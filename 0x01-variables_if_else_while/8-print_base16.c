#include <stdio.h>

/**
 * main - print the numbers of base 16 in lowercase
 * Return:0 when successful
 */
int main(void)
{
	int i;
	char L;

	for (i = 0 ; i <= 10 ; i++)
	       putchar(i % 10 + '0');
	for (L = 'a' ; L <= 'f' ; L++)
		putchar(L);
	putchar('\n');
	return (0);
}
