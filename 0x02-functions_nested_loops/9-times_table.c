#include "main.h"

/**
 * times_table - prints out the multi table 
 * Return:0 when successful
 */
void times_table(void)
{
	int i, x;
	for (i = 0 ; i <= 9 ; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			int result = i * x;
			_putchar(result);
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
