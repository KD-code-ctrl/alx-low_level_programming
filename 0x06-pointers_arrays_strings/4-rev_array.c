#include  "main.h"

/**
 * reverse_array - is a function that reverses an array of numbers
 * @a: is a pointer to array of integers
 * @n: is the number of elements in a array
 * Return: void nothing is to be returned
 */
void reverse_array(int *a, int n)
{
	int i, middle, hold;

	middle = n / 2;
	for (i = 0 ; i <= middle ; i++)
	{
		hold = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = hold;
	}
	_putchar('\n');
}
