#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to 2-dimensional
 * array of integers
 * @height: integer variable for the array
 * @width: integer variable for the array
 * Return: 2-dimensional array or NULL otherwise
 */
int **alloc_grid(int height, int width)
{
	int **arr;
	int i, x;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < height ; i++)
	{
		arr[i] = malloc(sizeof(int *) * width);
		if (arr[i] == NULL)
		{
			for (x = 0; x < i ; x++)
			{
				free(arr[x]);
			}
			free(arr);
			return (NULL);
		}
		for (x = 0 ; x < width ; x++)
		{
			arr[i][x] = 0;
		}
	}
	return (arr);
}
