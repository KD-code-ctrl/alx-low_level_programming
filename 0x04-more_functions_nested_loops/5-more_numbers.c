#include "main.h"

/**
 * more_numbers - print numbers from 0-14 ten times
 * Return:0 when successful
 */
void more_numbers(void)
{
	int i, x;

	i = 0;
	while(i < 10)
	{
		for (x = 0 ; x <= 14 ; x++)
		{
			_putchar((x % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
