#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * free_grid - frees a 2 dimensional grid
 * @grid: double pointer to the grid
 * @height: height of the grid
 * Return: Void
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
