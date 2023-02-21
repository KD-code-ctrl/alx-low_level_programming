#include <stdio.h>

/**
 * main - print  the alphabet in reverse order
 * Return:0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'z' ; ch >= 'a' ; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
