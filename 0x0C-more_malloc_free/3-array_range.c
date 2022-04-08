#include "main.h"
#include <stdlib.h>

/**
  * array_range - creates an array of integers
  * @min: the minimum value to be included
  * @max: the maximum value to be included
  * Return: pointer the newly created array
  *         if min > max, return NULL
  *         if malloc fails, return NULL
  */

int *array_range(int min, int max)
{
	int *n_array;
	int d;
	int i;

	if (min > max)
		return ('\0');

	d = max - min;
	n_array = malloc((d + 1) * sizeof(int));
	if (n_array == NULL)
		return ('\0');

	i = 0;
	while (i <= d)
	{
		n_array[i] = min++;
		i++;
	}

	return (n_array);
}
