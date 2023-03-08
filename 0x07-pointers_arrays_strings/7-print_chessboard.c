#include "main.h"

/**
 * print_chessboard - is a function that prints chessboard
 * @a: is the pointer to row
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i <= 8 ; i++)
	{
		for (j = 0 ; j <= 8 ; j++)
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
