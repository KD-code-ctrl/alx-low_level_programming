#include "main.h"
/**
 * print_alphabet_x10 - print the letters of the alphabet x10
 */
void print_alphabet_x10(void)
{
	int i , x;
	char ch ;

	i = 0;
	x = 10;
	while (i < x)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		i += 1;
		_putchar('\n');
	}
}
