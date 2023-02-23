#include <stdio.h>

/**
 * print_to_98 - print all natural numbers up_to 98
 * @n: is the value we going to start from
 * Return:0 when successful
 */
void print_to_98(int n)
{

	if (n <= 98)
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
	else
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
}
