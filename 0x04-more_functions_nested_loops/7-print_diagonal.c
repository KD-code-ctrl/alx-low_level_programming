#include "main.h"

/**
 * print_diagonal - prints a diagonal line 
 * @n: is the numbers of times the line is printed
 * Return:0 when successful
 */
void print_diagonal(int n)
{
	int i, x;

	if (n > 0)
	{
		for (i = 0 ; i < n ; i++)
		{
			for (x = 0 ; x < i ; x++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
