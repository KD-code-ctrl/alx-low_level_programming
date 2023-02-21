#include <stdio.h>

/**
 * main - prints the letter of the alphabet
 * Return:0 when successful
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++){
		putchar(ch);
	}
	return (0);
}
