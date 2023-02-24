#include "main.h"

/**
 * print_line - prints a horizontal line 
 * @n: is the argument passed in and determines length of line
 * Return:0 if successful
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0 ; x <= n ; x++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}
}		
