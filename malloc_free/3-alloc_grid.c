#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to
 *		a 2 dimensional array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: a pointer to the new array or NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	/*return NULL if inputs are less than 0*/
	if (width <= 0 || height <= 0)
		return (NULL);
	/*allocate memory space to the array of row-pointers*/
	grid = malloc(height * sizeof(int *));
	/*check if the system allocate spaces as request*/
	if (grid == NULL)
		return (NULL);
	/*allocate for col then initalise*/
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i-- > 0)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}
