#include <stdio.h>
/**
 * main - print singel digits of base 10 using putchar()
 * Return:0 if successful
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
