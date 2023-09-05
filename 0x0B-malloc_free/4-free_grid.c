#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2 dimensional grid
 * @grid: multidimesional interger array
 * @height: grid height
 * Return: None
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}

}
