#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - is functiont that prints the sum of diagonals
 * @a: is a pointer variable
 * @size: is the size of the matrix
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0 ; i < size ; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
