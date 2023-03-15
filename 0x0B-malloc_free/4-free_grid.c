#include "main.h"
#include <stdlib.h>

/**
 * free_grid - is a function that frees a 2 dimensional grid
 * @grid: is pointer to a 2-dimensional array
 * @height: integer variable which determines the length of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
