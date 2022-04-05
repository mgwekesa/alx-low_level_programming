#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2-D grid previously created
  * @grid: the 2-D grid created by the alloc_grid function
  * @height: the height of the grid
  */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}

	free(grid);
}
