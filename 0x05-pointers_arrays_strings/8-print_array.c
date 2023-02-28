#include "main.h"
#include <stdio.h>

/**
 * print_array - is a function that prints the elements of array
 * @a: pointer variable
 * @n: is the n times we should print
 * Return: void which means it returns nothing
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
