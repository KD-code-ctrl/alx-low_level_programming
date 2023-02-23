#include "main.h"

/**
 * print_to_98 - print all natural numbers up_to 98
 * n: is the value we going to start from
 * Return:0 when successful
 */
void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		if (n == 98)
			printf("%d\n", n);
		for (num = n ; num <= 98 ; num++)
		{
			printf("%d"; num);
			printf(',');
			printf(' ');
		}
	}
	else if (n > 98)
	{
		for (num = n ; num >= 98 ; num--)
		{
			printf("%d", num);
			printf(',');
			printf(' ');
		}
	}
}
