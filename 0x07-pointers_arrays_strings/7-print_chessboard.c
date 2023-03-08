#include "main.h"

/**
 * print_chessboard(char (*a)[8])
 * @(*a)[8]: is the array we will be looping through
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < 8 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
		{
			_putchar(a[i][j]);
			if (a[i][j] == ' ')
			{
				_putchar(32);
			}
		}
		_putchar('\n');
	}
}
