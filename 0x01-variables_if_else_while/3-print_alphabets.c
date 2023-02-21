#include <stdio.h>

/**
 * main - print letters of the alphabet in lower and upper case
 * Return:0 when successful
 */
int main(void)
{
	char ch,uch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
		putchar(ch);
	for (uch = 'A' ; uch <= 'Z' ; uch++)
		putchar(uch);
	putchar('\n');
	return (0);
}
