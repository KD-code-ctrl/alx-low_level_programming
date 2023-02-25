#include "main.h"

/**
 * print_square - prints a square
 * @size: is the size of the square
 * Return:0 when successful
 */
void print_square(int size)
{
	int x, i;

	if (size > 0)
	{
		for (x = 0 ; x < size ; x++)
		{
			for (i = 0 ; i < size ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
