#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - This frees 2d array
 * @grid: 2 the grid
 * @height: This is the height
 * Description: free memory of grd
 * Return: nothing
 *
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
