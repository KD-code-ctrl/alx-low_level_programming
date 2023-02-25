#include "main.h"

/**
 * print_triangle - prints a shape of a triangel
 * @size: determines how big the triangel should be
 * Return:0 if successful
 */
void print_triangle(int size)
{
	int i, x, space;

	if (size > 0)
	{
		for (x = 0; x < size ; x++)
		{
			for (space = size - x ; space > 1 ; space--)
			{
				_putchar(' ');
			}

			for (i = 0 ; i <= x ; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
