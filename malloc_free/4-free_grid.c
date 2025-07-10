#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2-dimensional array of integers
 *		created by function alloc_grid.
 * @grid: the 2-dimensional array
 * @height: the height of the array
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	/*if input grid is NULL*/
	if (grid == NULL)
		return;
	/*free memory space to the array*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
