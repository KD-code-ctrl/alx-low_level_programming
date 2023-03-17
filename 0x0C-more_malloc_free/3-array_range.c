#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - is a function that creates an array of integers
 * @min: is the minimum value
 * @max: is the maximum value
 * Return: pointer to the array and NULL if min greater than max
 * or if memmory isn't located
 */
int *array_range(int min, int max)
{
	int i, range;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	range = max - min;
	array = malloc((range + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min <= max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
