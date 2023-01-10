#include "main.h"
#include <stdlib.h>

/**
 * free_grid - A function that frees the array previously created
 * by the malloc_grid function
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free((int *)grid[i]);
	free(grid);
}
