#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - executes a function given as a parameter
  *                  on each element of an array
  * @array: the array
  * @size: the size of the array
  * @action: a pointer to the function you need to use
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}

}
