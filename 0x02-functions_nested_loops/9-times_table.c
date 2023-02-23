#include "main.h"

/**
 * times_table - prints out the multi table 
 * Return:0 when successful
 */
void times_table(void)
{
	int i, x,result;
	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar('0');
		for (x = 0; x <= 9; x++)
		{
			_putchar(',');
			_putchar(' ');
			result = i * x;
			if (result > 9)
				_putchar(' ');
			else
				_putchar((result/10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
