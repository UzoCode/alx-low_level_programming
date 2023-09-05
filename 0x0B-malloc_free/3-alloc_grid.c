#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to 2 dimensional interger array
 * @width: width of array
 * @height: array height
 * Return: Pointer of interger array
 */
int **alloc_grid(int width, int height)
{
	int **gridinit;
	int a, j;

	if (width < 1 || height < 1)
		return (NULL);

	gridinit = malloc(height * sizeof(int *));
	if (gridinit == NULL)
	{
		free(gridinit);
		return (NULL);
	}

	for (a = 0; a < height; a++)
	{
		gridinit[a] = malloc(width * sizeof(int));
		if (gridinit[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(gridinit[a]);
			free(gridinit);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (j = 0; j < width; j++)
			gridinit[a][j] = 0;

	return (gridinit);
}
