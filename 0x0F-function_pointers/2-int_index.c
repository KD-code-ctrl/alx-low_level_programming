#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - is a function that searches for an integer
 * @array: is an array of numbers
 * @size: is the size of the array
 * @cmp: is a pointer to a function
 * Return:  index of the first element If no element matches, return -1
 * If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, hold, track;

	track = 0;
	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			track = 1;
			hold = i;
			break;
		}
	}
	if (track == 0)
	{
		return (-1);
	}
	return (hold);
}
