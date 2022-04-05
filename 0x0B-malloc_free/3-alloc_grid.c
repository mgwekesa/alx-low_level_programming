#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid - returns a pointer to a 2-dimensional array of integers
  * @width: the number of columns of an array
  * @height: the number of rows of an array
  * Return: returns a pointer to a 2-D array of integers
  *         each element is initialized to 0, returns NULL on failure
  *         if width and height is 0, or negative, return NULL
  */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int w_i = 0;
	int h_i = 0;

	if (width <= 0 || height <= 0)
		return ('\0');
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return ('\0');

	while (h_i < height)
	{
		twoD[h_i] = malloc(sizeof(int) * width);
		if (twoD[h_i] == NULL)
		{
			while (h_i >= 0)
			{
				free(twoD[h_i]);
				h_i--;
			}
			free(twoD);
			return ('\0');
		}

		h_i++;
	}

	h_i = 0;
	while (h_i < height)
	{
		while (w_i < width)
		{
			twoD[h_i][w_i] = 0;
			w_i++;
		}
		h_i++;
	}

	return (twoD);
}
